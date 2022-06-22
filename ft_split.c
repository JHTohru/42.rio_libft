/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 02:23:01 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/17 02:33:07 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_tokens(const char *str, char c)
{
	size_t	cnt;
	int		in;

	cnt = 0;
	in = 0;
	while (*str != '\0')
	{
		if (!in && *str != c)
		{
			in = 1;
			cnt++;
		}
		else if (in && *str == c)
			in = 0;
		str++;
	}
	return (cnt);
}

static void	delete_tokens(char ***tokens)
{
	size_t	i;

	i = 0;
	while ((*tokens)[i] != NULL)
	{
		free((*tokens)[i]);
		(*tokens)[i] = NULL;
		i++;
	}
	free(*tokens);
	*tokens = NULL;
}

static void	read_tokens(char ***tokens, const char *str, char c)
{
	const char	*start;
	size_t		i;

	i = 0;
	while (*str != '\0')
	{
		while (*str == c && *str != '\0')
			str++;
		if (*str != '\0')
		{
			start = str;
			while (*str != c && *str != '\0')
				str++;
			(*tokens)[i] = ft_substr(start, 0, str - start);
			if ((*tokens)[i] == NULL)
			{
				delete_tokens(tokens);
				return ;
			}
			i++;
		}
	}
}

char	**ft_split(const char *str, char c)
{
	char		**tokens;

	tokens = ft_calloc(count_tokens(str, c) + 1, sizeof(char *));
	if (tokens != NULL)
		read_tokens(&tokens, str, c);
	return (tokens);
}

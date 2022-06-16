/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 02:23:01 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/16 10:45:47 by jmenezes         ###   ########.fr       */
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

char	**ft_split(const char *str, char c)
{
	char		**tokens;
	size_t		i;
	const char	*start;

	tokens = ft_calloc(count_tokens(str, c) + 1, sizeof(char *));
	if (tokens != NULL)
	{
		i = 0;
		start = NULL;
		while (1)
		{
			if (start == NULL && *str != c)
				start = str;
			else if (start != NULL && (*str == c || *str == '\0'))
			{
				tokens[i] = ft_substr(start, 0, str - start);
				if (tokens[i] == NULL)
				{
					delete_tokens(&tokens);
					return (NULL);
				}
				i++;
				start = NULL;
			}
			if (*str == '\0')
				break ;
			str++;
		}
	}
	return (tokens);
}

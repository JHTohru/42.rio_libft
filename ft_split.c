/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 02:23:01 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 06:30:01 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
				tokens[i++] = ft_substr(start, 0, str - start);
				start = NULL;
			}
			if (*str == '\0')
				break ;
			str++;
		}
	}
	return (tokens);
}

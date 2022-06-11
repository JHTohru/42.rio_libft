/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:44:56 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 06:30:01 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, const char *set)
{
	size_t	start;
	size_t	len;
	size_t	i;

	start = 0;
	while (ft_strchr(set, str[start]) != NULL && str[start] != '\0')
		start++;
	len = 0;
	i = 0;
	while (str[i + start] != '\0')
	{
		if (ft_strchr(set, str[i + start]) == NULL)
			len = i + 1;
		i++;
	}
	return (ft_substr(str, (unsigned int)start, len));
}

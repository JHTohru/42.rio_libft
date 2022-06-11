/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:30:28 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 06:28:12 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	nlen;
	size_t	i;

	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	i = 0;
	while (i < n && n - i >= nlen && haystack[i] != '\0')
	{
		if (ft_strncmp(haystack + i, needle, nlen) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

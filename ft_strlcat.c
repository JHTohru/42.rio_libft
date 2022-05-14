/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 22:59:35 by jmenezes          #+#    #+#             */
/*   Updated: 2022/04/29 23:06:31 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	i;

	dlen = 0;
	while (dst[dlen] != '\0' && dlen < size)
		dlen++;
	if (dlen == size)
		return (dlen + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i + dlen < size - 1)
	{
		dst[i + dlen] = src[i];
		i++;
	}
	dst[i + dlen] = '\0';
	while (src[i] != '\0')
		i++;
	return (dlen + i);
}

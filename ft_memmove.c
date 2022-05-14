/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 23:13:08 by jmenezes          #+#    #+#             */
/*   Updated: 2022/05/14 09:52:38 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memrcpy(void *dst, const void *src, size_t n)
{
	while (n-- > 0)
		((char *)dst)[n] = ((char *)src)[n];
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst == src)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	return (ft_memrcpy(dst, src, n));
}

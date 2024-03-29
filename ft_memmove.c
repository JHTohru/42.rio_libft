/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 23:13:08 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 06:30:01 by jmenezes         ###   ########.fr       */
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 12:30:02 by jmenezes          #+#    #+#             */
/*   Updated: 2022/04/30 12:32:43 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*m;
	size_t	i;

	m = (char *)s;
	i = 0;
	while (i < n)
	{
		if (m[i] == c)
			return ((void *)m + i);
		i++;
	}
	return (NULL);
}

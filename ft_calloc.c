/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:19:16 by jmenezes          #+#    #+#             */
/*   Updated: 2022/04/30 18:45:23 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	size_t	n;

	n = nmemb * size;
	if (nmemb != n / size)
	{
		errno = ENOMEM;
		return (NULL);
	}
	s = malloc(n);
	if (s != NULL)
		ft_bzero(s, n);
	return (s);
}

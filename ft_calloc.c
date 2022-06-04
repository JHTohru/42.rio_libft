/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:19:16 by jmenezes          #+#    #+#             */
/*   Updated: 2022/05/31 03:52:12 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/******************************************************************************

Since ft_calloc receives two size_t values that are multiplied one by the
other in order to compute the memory size to be allocated, that operation may
result in overflow.

The size_t type is used to represent the size of an object. It is the type of
the return of the typeof operator as of the parameter used by the malloc
function and also the type of the result of addresses subtraction.

This way a size_t overflow would represent an object so big that the system has
not enough memory to allocate it and therefore, if the multiplication between
nmem and size results in overflow, the ft_calloc function sets the errno with
the value corresponding to ENOMEM and returns NULL, following the Linux
implementation.

******************************************************************************/

#include "libft.h"
#include <errno.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	size_t	n;

	n = nmemb * size;
	if (n / size != nmemb)
	{
		errno = ENOMEM;
		return (NULL);
	}
	s = malloc(n);
	if (s != NULL)
		ft_bzero(s, n);
	return (s);
}

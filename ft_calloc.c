/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:19:16 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/24 01:20:35 by jmenezes         ###   ########.fr       */
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

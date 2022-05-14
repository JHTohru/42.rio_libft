/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 19:15:15 by jmenezes          #+#    #+#             */
/*   Updated: 2022/04/30 19:21:40 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	size;

	size = ft_strlen(str) + 1;
	dup = (char *)malloc(size);
	if (dup != NULL)
		ft_strlcpy(dup, str, size);
	return (dup);
}

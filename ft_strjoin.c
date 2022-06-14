/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 03:09:12 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/14 01:07:02 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*jstr;
	size_t	size;

	size = ft_strlen(str1) + ft_strlen(str2) + 1;
	jstr = (char *)malloc(size);
	if (jstr != NULL)
		ft_strlcpy(jstr + ft_strlcpy(jstr, str1, size), str2, size);
	return (jstr);
}

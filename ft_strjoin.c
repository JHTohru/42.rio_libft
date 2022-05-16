/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 03:09:12 by jmenezes          #+#    #+#             */
/*   Updated: 2022/05/15 21:24:06 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *pref, const char *suff)
{
	char	*str;
	size_t	plen;
	size_t	slen;

	plen = ft_strlen(pref);
	slen = ft_strlen(suff);
	str = (char *)malloc(plen + slen + 1);
	if (str != NULL)
	{
		ft_strlcpy(str, pref, plen + 1);
		ft_strlcpy(str + plen, suff, slen + 1);
	}
	return (str);
}

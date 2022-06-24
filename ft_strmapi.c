/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 23:56:54 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/24 02:09:55 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char	*mstr;
	size_t	i;

	mstr = malloc(ft_strlen(str) + 1);
	if (mstr != NULL)
	{
		i = 0;
		while (str[i] != '\0')
		{
			mstr[i] = f((unsigned int)i, str[i]);
			i++;
		}
		mstr[i] = '\0';
	}
	return (mstr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:21:29 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/23 21:53:49 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (1)
	{
		if ((unsigned char)*str == (unsigned char)c)
			return ((char *)str);
		if (*str == '\0')
			return (NULL);
		str++;
	}
}

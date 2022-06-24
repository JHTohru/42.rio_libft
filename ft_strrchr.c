/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:19:41 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/23 21:53:44 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*start;

	start = str;
	while (*str != '\0')
		str++;
	while (1)
	{
		if ((unsigned char)*str == (unsigned char)c)
			return ((char *)str);
		if (str == start)
			return (NULL);
		str--;
	}
}

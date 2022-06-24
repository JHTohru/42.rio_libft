/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 02:37:29 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/24 01:28:51 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;
	size_t	i;

	i = 0;
	while (i < start && str[i] != '\0')
		i++;
	str += i;
	i = 0;
	while (i < len && str[i] != '\0')
		i++;
	size = i + 1;
	substr = (char *)malloc(size);
	if (substr != NULL)
		ft_strlcpy(substr, str, size);
	return (substr);
}

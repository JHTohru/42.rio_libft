/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 02:37:29 by jmenezes          #+#    #+#             */
/*   Updated: 2022/05/15 21:23:50 by jmenezes         ###   ########.fr       */
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
	substr = (char *)ft_calloc(size, sizeof(char));
	if (substr != NULL)
		ft_strlcpy(substr, str, size);
	return (substr);
}

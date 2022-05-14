/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 23:32:15 by jmenezes          #+#    #+#             */
/*   Updated: 2022/05/06 23:03:12 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	str[12];
	size_t	i;
	int		n_is_neg;

	n_is_neg = n < 0;
	i = sizeof(str) - 1;
	str[i--] = '\0';
	while (1)
	{
		str[i] = n % 10;
		if (n_is_neg)
			str[i] *= -1;
		str[i] += '0';
		n /= 10;
		if (n == 0)
			break ;
		i--;
	}
	if (n_is_neg)
		str[--i] = '-';
	return (ft_strdup(str + i));
}

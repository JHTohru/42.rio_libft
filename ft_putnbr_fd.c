/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 00:09:45 by jmenezes          #+#    #+#             */
/*   Updated: 2022/05/05 00:20:23 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buf[12];
	size_t	i;
	int		n_is_neg;

	n_is_neg = n < 0;
	i = sizeof(buf) - 1;
	buf[i--] = '\0';
	while (1)
	{
		buf[i] = n % 10;
		if (n_is_neg)
			buf[i] *= -1;
		buf[i] += '0';
		n /= 10;
		if (n == 0)
			break ;
		i--;
	}
	if (n_is_neg)
		buf[--i] = '-';
	ft_putstr_fd(buf + i, fd);
}

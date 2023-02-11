/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:51:50 by jmenezes          #+#    #+#             */
/*   Updated: 2023/02/11 05:46:07 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' '
		|| c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v');
}

int	ft_atoi(const char *nbr)
{
	int	sign;
	int	n;

	while (ft_isspace(*nbr))
		nbr++;
	sign = 1;
	if (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign = -1;
		nbr++;
	}
	n = 0;
	while (ft_isdigit(*nbr))
	{
		n = n * 10 + (*nbr - '0') * sign;
		if (sign == -1 && n > 0)
			return (0);
		else if (sign == 1 && n < 0)
			return (-1);
		nbr++;
	}
	return (n);
}

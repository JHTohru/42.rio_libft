/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:51:50 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 06:30:01 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_isspace(int c)
{
	return (c == ' '
		|| c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v');
}

static int	ft_issign(int c)
{
	return (c == '+' || c == '-');
}

int	ft_atoi(const char *nptr)
{
	int			sign;
	long int	n;

	while (ft_isspace(*nptr))
		nptr++;
	sign = 1;
	if (ft_issign(*nptr))
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	n = 0;
	while (ft_isdigit(*nptr))
	{
		n = n * 10 + (*nptr - '0') * sign;
		if (sign == -1 && n > 0)
			return (0);
		else if (sign == 1 && n < 0)
			return (-1);
		nptr++;
	}
	return (n);
}

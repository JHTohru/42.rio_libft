/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 23:32:15 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/14 01:07:37 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	nbrlen(int n)
{
	int	i;

	i = 1;
	while (1)
	{
		n /= 10;
		if (n == 0)
			return (i);
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		n_is_neg;
	int		i;

	i = nbrlen(n);
	nbr = malloc(i + 1);
	if (nbr != NULL)
	{
		n_is_neg = n < 0;
		nbr[i--] = '\0';
		while (1)
		{
			if (n_is_neg)
				nbr[i] = n % 10 * -1 + '0';
			else
				nbr[i] = n % 10 + '0';
			n /= 10;
			i--;
			if (n == 0)
				break ;
		}
		if (n_is_neg)
			nbr[i] = '-';
	}
	return (nbr);
}

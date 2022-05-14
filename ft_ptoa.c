/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:01:48 by jmenezes          #+#    #+#             */
/*   Updated: 2022/05/14 12:56:20 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

static int	digits_cnt(uintptr_t n, int rad)
{
	int	cnt;

	cnt = 0;
	while (1)
	{
		cnt++;
		n /= rad;
		if (n == 0)
			break ;
	}
	return (cnt);
}

static char	*ptoa_base(void *p, char *base)
{
	char		*str;
	uintptr_t	n;
	int			rad;
	int			len;
	int			i;

	n = (uintptr_t)p;
	rad = (int)ft_strlen(base);
	len = digits_cnt(n, rad);
	str = ft_strnew(len + 1);
	if (str != NULL)
	{
		i = len - 1;
		while (1)
		{
			str[i--] = base[n % rad];
			n /= rad;
			if (n == 0)
				break ;
		}
	}
	return (str);
}

char	*ft_ptoa(void *p)
{
	return (ptoa_base(p, "0123456789abcdef"));
}

// static char	half_byte_to_hex(unsigned char b)
// {
// 	b &= 15;
// 	if (b < 10)
// 		return (b + '0');
// 	b -= 10;
// 	return (b + 'a');
// }

// static char	*ptoa_little_endian(void *p)
// {
// 	char			*str;
// 	int				len;
// 	int				i;
// 	int				j;
// 	unsigned char	b;

// 	len = (int)sizeof(p);
// 	while (((char *)&p)[len - 1] == 0 && len > 1)
// 		len--;
// 	str = ft_strnew(len + 1);
// 	if (str != NULL)
// 	{
// 		j = 0;
// 		i = len - 1;
// 		while (i >= 0)
// 		{
// 			b = ((unsigned char *)&p)[i--];
// 			str[j++] = half_byte_to_hex(b >> 4);
// 			str[j++] = half_byte_to_hex(b);
// 		}
// 	}
// 	return (str);
// }

// static char	*ptoa_big_endian(void *p)
// {
// 	char			*str;
// 	int				len;
// 	int				i;
// 	int				j;
// 	unsigned char	b;

// 	i = 0;
// 	len = (int)sizeof(p);
// 	while (((char *)&p)[i++] == 0 && len > 1)
// 		len--;
// 	str = ft_strnew(len + 1);
// 	if (str != NULL)
// 	{
// 		j = 0;
// 		i = 0;
// 		while (i < len)
// 		{
// 			b = ((unsigned char *)&p)[i++];
// 			str[j++] = half_byte_to_hex(b >> 4);
// 			str[j++] = half_byte_to_hex(b);
// 		}
// 	}
// 	return (str);
// }

// static	int	machine_is_little_endian(void)
// {
// 	int	c;

// 	c = 1;
// 	return (*((char *)&c));
// }

// char	*ft_ptoa(void *p)
// {
// 	if (machine_is_little_endian())
// 		return (ptoa_little_endian(p));
// 	return (ptoa_big_endian(p));
// }

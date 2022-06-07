/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:41:06 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/07 10:45:34 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"
#include <stdio.h>

int		ft_isdigit(int c);

/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The isdigit function tests for any decimal-digit character (as defined in  */
/* 5.2.1).                                                                    */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/* SOURCE                                                                     */
/*                                                                            */
/* The C Programming Language International Standard                          */
/* Working draft — October 18, 2021 ISO/IEC 9899:202x (E)                     */
/* https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2731.pdf                 */
/*                                                                            */
/* ************************************************************************** */

int	test_ft_isdigit(void)
{
	int	c;

	if (ft_isdigit(EOF))
		return (0);
	c = 0;
	while (c < '0')
		if (ft_isdigit(c++))
			return (0);
	while (c <= '9')
		if (!ft_isdigit(c++))
			return (0);
	while (c < 256)
		if (ft_isdigit(c++))
			return (0);
	return (1);
}

int	main(void)
{
	print_test_result("test_ft_isdigit", test_ft_isdigit());
	return (0);
}

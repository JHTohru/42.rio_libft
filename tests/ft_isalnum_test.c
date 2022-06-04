/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:48:59 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/03 10:12:54 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"
#include <stdio.h>

int		ft_isalnum(int c);

/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The isalnum function tests for any character for which isalpha or isdigit  */
/* is true.                                                                   */
/*                                                                            */
/* ************************************************************************** */
/* *****                                                                ***** */
/* *****  Taken from the C Programming Language International Standard  ***** */
/* *****     Working draft — October 18, 2021 ISO/IEC 9899:202x (E)     ***** */
/* *****   https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2731.pdf   ***** */
/* *****                                                                ***** */
/* ************************************************************************** */

// The ft_isalnum must return true when the argument is eigther an alphabetic
// or a numeric character and false otherwise.
int	test_ft_isalnum(void)
{
	int	c;

	if (ft_isalnum(EOF))
		return (0);
	c = 0;
	while (c < '0')
		if (ft_isalnum(c++))
			return (0);
	while (c <= '9')
		if (!ft_isalnum(c++))
			return (0);
	while (c < 'A')
		if (ft_isalnum(c++))
			return (0);
	while (c <= 'Z')
		if (!ft_isalnum(c++))
			return (0);
	while (c < 'a')
		if (ft_isalnum(c++))
			return (0);
	while (c <= 'z')
		if (!ft_isalnum(c++))
			return (0);
	while (c < 256)
		if (ft_isalnum(c++))
			return (0);
	return (1);
}

int	main(void)
{
	print_test_result("test_ft_isalnum", test_ft_isalnum());
	return (0);
}

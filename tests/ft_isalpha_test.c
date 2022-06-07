/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:49:04 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/07 10:46:45 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"
#include <stdio.h>

int		ft_isalpha(int c);

/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The isalpha function tests for any character for which isupper or islower  */
/* is true, or any character that is one of a locale-specific set of          */
/* alphabetic characters for which none of iscntrl, isdigit, ispunct, or      */
/* isspace is true.) In the "C" locale, isalpha returns true only for the     */
/* characters for which isupper or islower is true.                           */
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

// The ft_isalpha must return true when the argument is an alphabetic character
// and false otherwise.
int	test_ft_isalpha(void)
{
	int	c;

	if (ft_isalpha(EOF))
		return (0);
	c = 0;
	while (c < 'A')
		if (ft_isalpha(c++))
			return (0);
	while (c <= 'Z')
		if (!ft_isalpha(c++))
			return (0);
	while (c < 'a')
		if (ft_isalpha(c++))
			return (0);
	while (c <= 'z')
		if (!ft_isalpha(c++))
			return (0);
	while (c < 256)
		if (ft_isalpha(c++))
			return (0);
	return (1);
}


int	main(void)
{
	print_test_result("test_ft_isalpha", test_ft_isalpha());
	return (0);
}

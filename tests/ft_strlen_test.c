/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:06:22 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/07 14:41:46 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_utils.h"
#include <stddef.h>

size_t	ft_strlen(const char *s);
/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The strlen function computes the length of the string pointed to by s.     */
/*                                                                            */
/*                                                                            */
/* RETURNS                                                                    */
/*                                                                            */
/* The strlen function returns the number of characters that precede the      */
/* terminating null character.                                                */
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

// The ft_strlen must return the length of the given string.
int	test_ft_strlen(void)
{
	return (ft_strlen("42") == 2 && ft_strlen("") == 0);
}

int	main(void)
{
	print_test_result("test_ft_strlen", test_ft_strlen());
	return (0);
}

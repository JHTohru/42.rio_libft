/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:31:04 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 18:54:49 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"
#include <string.h>

/* ************************************************************************** */
/*                                                                            */
/* size_t strlcpy(char *dst, const char *src, size_t dstsize)                 */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The strlcpy() function copy strings with the same input parameters and     */
/* output result as snprintf(3). It is designed to be safer, more consistent, */
/* and less error prone replacement for the easily misused function           */
/* strncpy(3).                                                                */
/*                                                                            */
/* strlcpy() take the full size of the destination buffer and guarantee       */
/* NUL-termination if there is room. Note that room for the NUL should be     */
/* included in dstsize.                                                       */
/*                                                                            */
/* strlcpy() copies up to dstsize - 1 characters from the string src to dst,  */
/* NUL-terminating the result if dstsize is not 0.                            */
/*                                                                            */
/* If the src and dst strings overlap, the behavior is undefined.             */
/*                                                                            */
/*                                                                            */
/* RETURN                                                                     */
/*                                                                            */
/* Besides quibbles over the return type (size_t versus int) and signal       */
/* handler safety (snprintf(3) is not entirely safe on some systems), the     */
/* following two are equivalent:                                              */
/*                                                                            */
/*     n = strlcpy(dst, src, len);                                            */
/*     n = snprintf(dst, len, "%s", src);                                     */
/*                                                                            */
/* Like snprintf(3), the strlcpy() function return the total length of src.   */
/* If the return value is >= dstsize, the output string has been truncated.   */
/* It is the caller's responsibility to handle this.                          */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/* SOURCE                                                                     */
/*                                                                            */
/* The FreeBSD Library Functions Manual STRLCPY(3)                            */
/* https://www.freebsd.org/cgi/man.cgi?query=strlcat&sektion=3                */
/*                                                                            */
/*                                                                            */
/* Proceedings of the FREENIX Track, 1999 USENIX Annual Technical Conference  */
/* https://usenix.org/legacy/event/usenix99/full_papers/millert/millert.pdf   */
/*                                                                            */
/* ************************************************************************** */

// ft_strlcpy must copy all the characters from the string src to the string dst
// when the src length is less than the dstsize parameter value.
int	test_ft_strlcpy_effect_regular(void)
{
	char	src[] = "abcdef";
	char	dst[sizeof(src)];

	ft_strlcpy(dst, src, sizeof(dst));
	return (strcmp(dst, src) == 0);
}

// ft_strlcpy must copy up to dstsize - 1 bytes from the string src to the
// string dst.
int	test_ft_strlcpy_effect_truncation(void)
{
	char	src[] = "abcdef";
	char	dst[sizeof(src) - 1];

	ft_strlcpy(dst, src, sizeof(dst));
	return (strcmp(dst, "abcde") == 0);
}

// ft_strlcpy must take no effect when dstsize is zero.
int	test_ft_strlcpy_effect_zero_len(void)
{
	char	str[] = "abcde";

	ft_strlcpy(str, "fghij", 0);
	return (strcmp(str, "abcde") == 0);
}

// ft_strlcpy must return the length of the src string parameter.
int	test_ft_strlcpy_return(void)
{
	char	dst[20];
	char	src[] = "abcdef";

	return (ft_strlcpy(dst, src, sizeof(dst)) == strlen(src));
}

int	main(void)
{
	print_test_result("test_ft_strlcpy_effect_regular",
		test_ft_strlcpy_effect_regular());
	print_test_result("test_ft_strlcpy_effect_truncation",
		test_ft_strlcpy_effect_truncation());
	print_test_result("test_ft_strlcpy_effect_zero_len",
		test_ft_strlcpy_effect_zero_len());
	print_test_result("test_ft_strlcpy_return", test_ft_strlcpy_return());
	return (0);
}

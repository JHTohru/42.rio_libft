/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:01:50 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 21:07:44 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/* size_t strlcat(char *dst, const char *src, size_t dstsize)                 */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The strlcat() function concatenates strings with the same input parameters */
/* and output result as snprintf(3). It is designed to be safer, more         */
/* consistent, and less error prone replacement for the easily misused        */
/* function strncat(3).                                                       */
/*                                                                            */
/* strlcat() take the full size of the destination buffer and guarantee       */
/* NUL-termination if there is room. Note that room for the NUL should be     */
/* included in dstsize.                                                       */
/*                                                                            */
/* strlcat() appends string src to the end of dst. It will append at most     */
/* dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless  */
/* dstsize is 0 or the original dst string was longer than dstsize (in        */
/* practice this should not happen as it means that either dstsize is         */
/* incorrect or that dst is not a proper string).                             */
/*                                                                            */
/* If the src and dst strings overlap, the behavior is undefined.             */
/*                                                                            */
/*                                                                            */
/* RETURN                                                                     */
/*                                                                            */
/* Like snprintf(3), the strlcat() function returns the total length of the   */
/* string it tried to create. What means the initial length of dst plus the   */
/* length of src.                                                             */
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

#include "libft.h"
#include "test_utils.h"

int	test_ft_strlcat_regular(void)
{
	char	want[] = "abcdefghij";
	char	dst[sizeof(want)] = "abcde";
	char	src[] = "fghij";

	ft_strlcat(dst, src, sizeof(dst));
	return (strcmp(dst, want) == 0);	
}

// ft_strlcat will write no character in dst if there is no room for it.
int	test_ft_strlcat_no_write(void)
{
	char	odst[] = "abcde";
	char	dst[] = "abcde";
	char	src[] = "fghij";

	strcpy(dst, src);
	ft_strlcat(dst, src, sizeof(dst));
	return (strcmp(dst, odst) == 0);
}

// ft_strlcat must not write more than dstsize - strlen(dst) - 1 characters
// from src to dst.
int	test_ft_strlcat_truncation(void)
{
	char	dst[7] = "abcde";
	char	src[] = "fghij";

	ft_strlcat(dst, src, sizeof(dst));
	return (strcmp(dst, "abcdef") == 0);
}

int	test_ft_strlcat_return_regular(void)
{
	char	odst[] = "abcde";
	char	src[] = "fghij";
	char	dst[sizeof(odst) + sizeof(src) + 1];

	strcpy(dst, odst);
	return (ft_strlcat(dst, src, sizeof(dst)) == sizeof(odst) + sizeof(src));
}

int	test_ft_strlcat_return_truncation(void)
{
	char	dst[10];
	char	src[] = "abcdefghijklmnopqrstuvwyz";

	return (ft_strlcat(dst, src, sizeof(dst)) >= sizeof(dst));
}

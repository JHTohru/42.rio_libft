/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:01:50 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 19:00:50 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"

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

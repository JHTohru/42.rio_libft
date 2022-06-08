/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:31:04 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/08 12:12:24 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/* ************************************************************************** */
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

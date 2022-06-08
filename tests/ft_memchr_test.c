/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:30:57 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/08 10:51:26 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"

void	*ft_memchr(const void *s, int c, size_t n);

/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The memchr function locates the first occurrence of c (converted to an     */
/* unsigned char) in the initial n characters (each interpreted as unsigned   */
/* char) of the object pointed to by s. The implementation shall behave as if */
/* it reads the characters sequentially and stops as soon as a matching       */
/* character is found.                                                        */
/*                                                                            */
/*                                                                            */
/* RETURN                                                                     */
/*                                                                            */
/* The memchr function returns a pointer to the located character, or a null  */
/* pointer if the character does not occur in the object.                     */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/* SOURCE                                                                     */
/*                                                                            */
/* The Open Group Base Specifications Issue 6                                 */
/* IEEE Std 1003.1, 2004 Edition                                              */
/* https://pubs.opengroup.org/onlinepubs/009695399/functions/bzero.html       */
/*                                                                            */
/* ************************************************************************** */

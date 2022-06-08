/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:29:34 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/08 10:51:15 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"

void	*ft_memmove(void *s1, const void *s2, size_t n);

/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The memmove function copies n characters from the object pointed to by s2  */
/* into the object pointed to by s1. Copying takes place as if the n          */
/* characters from the object pointed to by s2 are first copied into a        */
/* temporary array of n characters that does not overlap the objects pointed  */
/* to by s1 and s2, and then the n characters from the temporary array are    */
/* copied into the object pointed to by s1.                                   */
/*                                                                            */
/*                                                                            */
/* RETURN                                                                     */
/*                                                                            */
/* The memmove function returns the value of s1.                              */
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

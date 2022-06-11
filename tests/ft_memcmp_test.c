/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:33:03 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 06:30:01 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The memcmp function compares the first n characters of the object pointed  */
/* to by s1 to the first n characters of the object pointed to by s2.         */
/*                                                                            */
/*                                                                            */
/* RETURN                                                                     */
/*                                                                            */
/* The memcmp function returns an integer greater than, equal to, or less     */
/* than zero, accordingly as the object pointed to by s1 is greater than,     */
/* equal to, or less than the object pointed to by s2.                        */
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

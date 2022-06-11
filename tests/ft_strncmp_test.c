/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:28:13 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 06:30:01 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"

int	strncmp(const char *s1, const char *s2, size_t n);

/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The strncmp function compares not more than n characters (characters that  */
/* follow a null character are not compared) from the array pointed to by s1  */
/* to the array pointed to by s2.                                             */
/*                                                                            */
/*                                                                            */
/* RETURN                                                                     */
/*                                                                            */
/* The strncmp function returns an integer greater than, equal to, or less    */
/* than zero, accordingly as the possibly null-terminated array pointed to by */
/* s1 is greater than, equal to, or less than the possibly null-terminated    */
/* array pointed to by s2.                                                    */
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:37:16 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/08 11:41:43 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"

char	*strnstr(const char *big, const char *little, size_t len);

/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The strnstr() function locates the first occurrence of the null-terminated */
/* string little in the string big, where not more than len characters are    */
/* searched. Characters that appear after a '\0' character are not searched.  */
/*                                                                            */
/*                                                                            */
/* RETURN                                                                     */
/*                                                                            */
/* If little is an empty string, big is returned; if little occurs nowhere in */
/* big, NULL is returned; otherwise a pointer to the first character of the   */
/* first occurrence of little is returned.                                    */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/* SOURCE                                                                     */
/*                                                                            */
/* The FreeBSD Library Functions Manual STRLCPY(3)                            */
/* https://www.freebsd.org/cgi/man.cgi?query=strnstr&sektion=3                */
/*                                                                            */
/* ************************************************************************** */

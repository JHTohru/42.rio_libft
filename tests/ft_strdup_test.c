/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:41:12 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 06:30:01 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"

char	*ft_strdup(const char *s);

/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The strdup function creates a copy of the string pointed to by s in a      */
/* space allocated as if by a call to malloc.                                 */
/*                                                                            */
/*                                                                            */
/* RETURN                                                                     */
/*                                                                            */
/* The strdup function returns a pointer to the first character of the        */
/* duplicate string. The returned pointer can be passed to free. If no space  */
/* can be allocated the strdup function returns a null pointer.               */
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:58:49 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 06:30:01 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));

/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The ft_strmapi function applies the function f to each character of the    */
/* string s, and passing its index as first argument to create a new string   */
/* (with malloc(3)) resulting from successive applications of f.              */ 
/*                                                                            */
/*                                                                            */
/* RETURN                                                                     */
/*                                                                            */
/* The ft_strmapi function returns a pointer to the string created from the   */
/* successive applications of f or NULL if the allocation fails.              */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/* SOURCE                                                                     */
/*                                                                            */
/* 42 Libft subject                                                           */
/*                                                                            */
/* ************************************************************************** */

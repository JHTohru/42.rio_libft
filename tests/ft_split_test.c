/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:52:55 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 06:30:01 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"

char	**ft_split(const char *s, char c);

/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The ft_split function allocates (with malloc(3)) and returns an array of   */
/* strings obtained by splitting s using the character c as a delimiter. The  */
/* array must end with a NULL pointer.                                        */
/*                                                                            */
/* RETURN                                                                     */
/*                                                                            */
/* The ft_split function returns a pointer to the array of new strings        */
/* resulting from the split or NULL if the allocation fails                   */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/* SOURCE                                                                     */
/*                                                                            */
/* 42 Libft subject                                                           */
/*                                                                            */
/* ************************************************************************** */

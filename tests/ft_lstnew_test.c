/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:15:12 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 06:30:01 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content);

/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The ft_lstnew function allocates (with malloc(3)) and returns a new node.  */
/* The member variable content is initialized with the value of the parameter */
/* content. The variable next is initialized to NULL.                         */
/*                                                                            */
/*                                                                            */
/* RETURN                                                                     */
/*                                                                            */
/* The ft_lstnew function returns a pointer to the new node.                  */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/* SOURCE                                                                     */
/*                                                                            */
/* 42 Libft subject                                                           */
/*                                                                            */
/* ************************************************************************** */

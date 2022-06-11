/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:36:51 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 06:30:01 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *));

/* ************************************************************************** */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The ft_lstdelone function takes as a parameter a node and frees the memory */
/* of the node's content using the function del given as a parameter and free */
/* the node. The memory of next must not be freed.                            */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/* SOURCE                                                                     */
/*                                                                            */
/* 42 Libft subject                                                           */
/*                                                                            */
/* ************************************************************************** */

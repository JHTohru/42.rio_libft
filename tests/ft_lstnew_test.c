/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:15:12 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/16 11:31:02 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/* t_list *ft_lstnew(void *content)                                           */
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

#include "libft.h"
#include "test_utils.h"
#include <stdlib.h>

// ft_lstnew must return a new node which content is the given 'content'
// parameter and next is a null pointer.
int test_ft_lstnew(void)
{
    char    str[] = "lorem ipsum dolor sit amet";
    t_list  *node;
    int     res;

    node = ft_lstnew((void *)str);
    res = node->content == str && node->next == NULL;
    free(node);
    return (res);
}

// ft_lstnew must return a null pointer if allocation fails.
// todo

int main(void)
{
	print_test_result("test_ft_lstnew", test_ft_lstnew());
    return (0);
}

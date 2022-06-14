/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:48:33 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/14 05:46:34 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/* char *ft_strjoin(const char *s1, const char *s2)                           */
/*                                                                            */
/* DESCRIPTION                                                                */
/*                                                                            */
/* The ft_strjoin function allocates (with malloc(3)) and returns a new       */
/* string, which is the result of the concatenation of s1 and s2.             */
/*                                                                            */
/*                                                                            */
/* RETURN                                                                     */
/*                                                                            */
/* The ft_strjoin function returns a pointer to the new string or NULL if the */
/* allocation fails.                                                          */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/* SOURCE                                                                     */
/*                                                                            */
/* 42 Libft subject                                                           */
/* https://cdn.intra.42.fr/pdf/pdf/50832/en.subject.pdf                       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"
#include <stdlib.h>
#include <string.h>

// ft_strjoin allocates and returns a new string resulting from the
// concatenation of s1 and s2.
int test_ft_strjoin_success(void)
{
    char    str1[] = "abcde";
    char    str2[] = "fghij";
    char    *cat;
    int     res;

    cat = ft_strjoin(str1, str2);
    res = strcmp(cat, "abcdefghij") == 0;
    free(cat);
    return (res);
}

// ft_strjoin returns NULL if the allocation fails.
// todo

int main(void)
{
	print_test_result("test_ft_strjoin_success", test_ft_strjoin_success());
    return (0);
}

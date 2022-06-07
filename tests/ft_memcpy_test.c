/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:42:49 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/07 14:20:37 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_utils.h"
#include <string.h>

int	test_ft_memcpy_effect(void)
{
	char	s[] = "abcdef";

	ft_memcpy((void *)s, (void *)(s + 3), 3);
	return (strcmp(s, "defdef") == 0);
}

int	test_ft_memcpy_effect_2(void)
{
	char	s[] = "abcdef";

	ft_memcpy((void *)(s + 3), (void *)s, 3);
	return (strcmp(s, "abcabc") == 0);
}

int	test_ft_memcpy_effect_3(void)
{
	char	s[] = "abcdef";

	ft_memcpy((void *)s, (void *)"ghijkl", 0);
	return (strcmp(s, "abcdef") == 0);
}

int	test_ft_memcpy_return(void)
{
	char	s[] = "abcdef";

	return (ft_memcpy((void *)s, (void *)"ghijkl", 0) == (void *)s);
}

int	main(void)
{
	print_test_result("test_ft_memcpy_effect", test_ft_memcpy_effect());
	print_test_result("test_ft_memcpy_effect_2", test_ft_memcpy_effect_2());
	print_test_result("test_ft_memcpy_effect_3", test_ft_memcpy_effect_3());
	print_test_result("test_ft_memcpy_return", test_ft_memcpy_return());
	return (0);

}

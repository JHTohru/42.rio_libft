/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:58:20 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/17 01:29:21 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TEST_UTILS_H
# define TEST_UTILS_H

void	print_test_result(char *name, int res);

int		test_nomem(int (*fn)(void));

char    *gen_filename(char *pref);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:45:10 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/11 06:30:01 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define RESET "\e[0m"

void	print_test_result(char *name, int res)
{
	printf("%s: ", name);
	if (res)
		printf(GRN "OK!\n");
	else
		printf(RED "KO!\n");
	printf(RESET);
}

#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <sys/types.h>
#include <unistd.h>

static int	nomem_call(int (*fn)(void))
{
	struct rlimit	lim;
	int				res;

	lim.rlim_cur = 0;
	lim.rlim_max = 0;
	setrlimit(RLIMIT_AS, &lim);
	res = fn();
	return (res);
}

int	test_nomem(int (*fn)(void))
{
	pid_t	pid;
	int 	mypipe[2];
	int 	n;

	if (pipe(mypipe) != 0)
	{
		fprintf(stderr, "pipe() failed\n");
		exit(EXIT_FAILURE);
	}
	pid = fork();
	if (pid < 0)
	{
		fprintf(stderr, "fork() failed\n");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		close(mypipe[0]);
			n = nomem_call(fn);
		write(mypipe[1], &n, sizeof(n));
		close(mypipe[1]);
		exit(EXIT_SUCCESS);
	}
	close (mypipe[1]);
	read(mypipe[0], &n, sizeof(n));
	close(mypipe[0]);
	return (n);
}

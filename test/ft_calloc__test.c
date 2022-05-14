#include <errno.h>
#include <limits.h>
#include <stdlib.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
void	*ft_calloc(size_t nmemb, size_t size);

int	test0()
{
	char	*m;
	size_t	i;
	size_t	nmemb;
	size_t	size;
	int		ok;

	nmemb = 7;
	size = 6;
	m = (char *)ft_calloc(nmemb, size);
	ok = 1;
	i = 0;
	while (i < nmemb * size)
	{
		if (m[i] != 0)
		{
			ok = 0;
			break ;
		}
		i++;
	}
	free(m);
	print_test_result(ok, "The function returns a pointer to a memory area of "
		"nmemb * size bytes set to zero.");
	return (ok);
}

int	test1()
{
	void	*s;
	size_t	nmemb;
	size_t	size;
	int		ok;

	nmemb = ULONG_MAX;
	size = ULONG_MAX;
	s = ft_calloc(nmemb, size);
	ok = s == NULL && errno == ENOMEM;
	free(s);
	print_test_result(ok, "If the multiplication of nmemb and size results in "
		"integer overflow, then the function returns NULL and errno is set to "
		"ENOMEM.");
	return (ok);
}

int	main(void)
{
	print_test_title("void *ft_calloc(size_t nmemb, size_t size)");
	test0();
	test1();
	return (0);
}

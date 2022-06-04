#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
void	*ft_bzero(void *m, size_t n);

int	test0()
{
	char	s[42];
	size_t	n;
	size_t	i;
	int		ok;

	n = sizeof(s) / sizeof(s[0]);
	memset(s, 0xFF, n);
	ft_bzero(s, n);
	ok = 1;
	i = 0;
	while (i < n)
	{
		if (s[i] != '\0')
		{
			ok = 0;
			break ;
		}
		i++;
	}
	print_test_result(ok, "The first n bytes of memory must be filled with "
		"null bytes.");
	return (ok);
}

int	main(void)
{
	print_test_title("void *ft_bzero(void *m, size_t n);");
	test0();
	return (0);
}

#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
void	*ft_memset(void *m, int c, size_t n);

int	test0()
{
	char	s[42];
	size_t	n;
	int		ok;
	size_t	i;
	size_t	sz;

	sz = sizeof(s) / sizeof(s[0]);
	ft_memset((void *)s, '\0', sz);
	n = sz / 2;
	ft_memset((void *)s, 'x', n);
	ok = 1;
	i = 0;
	while (i < n)
	{
		if (s[i] != 'x')
		{
			ok = 0;
			break ;
		}
		i++;
	}
	if (ok)
		while (i < sz)
		{
			if (s[i] != '\0')
			{
				ok = 0;
				break ;
			}
			i++;
		}
	print_test_result(ok, "The first n bytes of memory must be filled with the given constant byte value.");
	return (ok);
}

int	main(void)
{
	print_test_title("void *ft_memset(void *m, int c, size_t n)");
	test0();
	return (0);
}

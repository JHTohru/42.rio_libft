#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
void	*ft_memchr(const void *s, int c, size_t n);

int	test0()
{
	char	str[] = "lorem ipsum";
	int		ok;

	ok = ft_memchr((const void *)str, 'm', sizeof(str)) == (void *)str + 4;
	print_test_result(ok, "If there is an occurrence of the character c in the first n bytes "
		"of the memory area pointed by s, the function returns a pointer to it.");
	return (ok);
}

int	test1()
{
	char	str[] = "lorem ipsum";
	int		ok;

	ok = ft_memchr((const void *)str, 'm', 4) == NULL;
	print_test_result(ok, "If there is no occurrence of the character c in the first n bytes "
		"of the memory area pointed by s, the function returns NULL.");
	return (ok);
}

int	main(void)
{
	print_test_title("void *ft_memchr(const void *s, int c, size_t n)");
	test0();
	test1();
	return (0);
}

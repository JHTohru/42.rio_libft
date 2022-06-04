#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
void	*ft_memmove(void *dest, const void *src, size_t n);

int	test0(void)
{
	char	src[] = "abc";
	size_t	sz = sizeof(src) / sizeof(src[0]);
	char	dst[sz];
	int		ok;

	ok = ft_memmove(dst, src, sz) == dst;
	print_test_result(ok, "Function returns a pointer to dest.");
	return (ok);
}

int	test1(void)
{
	char	str[] = "abc";
	int		ok;

	ok = ft_memmove(str + 1, str, 2) == str + 1;
	print_test_result(ok, "The memory area dst may overlap src.");
	return (ok);
}

int	test2(void)
{
	char	str[] = "abc";
	int		ok;

	ok = ft_memmove(str, str + 1, 2) == str;
	print_test_result(ok, "The memory area src may overlap dst.");
	return (ok);
}

int	main(void)
{
	print_test_title("void *ft_memmove(void *dest, const void *src, size_t n)");
	test0();
	test1();
	test2();
	return (0);
}

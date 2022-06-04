#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	test0()
{
	char	str[18] = "lorem ipsum";
	int		ok;

	ft_strlcat(str, " dolor sit amet", sizeof(str));
	ok = strcmp(str, "lorem ipsum dolor") == 0;
	print_test_result(ok, "The function appends at most size - strlen(dst) - 1 bytes from src "
		"to the end of dst, and NUL-terminate it.");
	return (ok);
}

int	test1()
{
	char	dst[27] = "lorem ipsum";
	char	src[] = " dolor sit amet";
	size_t	xret;
	int		ok;

	xret = (strlen(dst) + strlen(src));
	ok = ft_strlcat(dst, src, sizeof(dst)) == xret;
	print_test_result(ok, "If there is any NUL in the first size bytes of dst, the function "
		"returns the sum between the lengths of dst and src.");
	return (ok);
}


int	test2()
{
	char	dst[27] = "lorem ipsum";
	char	src[] = " dolor sit amet";
	size_t	xret;
	size_t	sz;
	int		ok;

	sz = 3;
	xret = sz + strlen(src);
	ok = ft_strlcat(dst, src, sz) == xret;
	print_test_result(ok, "If there is not a NUL in the first size bytes of dst, the function "
		"returns size plus the length of src.");
	return (ok);
}

int	main(void)
{
	print_test_title("size_t ft_strlcat(char *dst, const char *src, size_t size)");
	test0();
	test1();
	test2();
	return (0);
}

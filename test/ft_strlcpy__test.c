#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int	test0(void)
{
	char	src[] = "lorem ipsum dolor sit amet consectetur dolor adpisc elit";
	size_t	sz = sizeof(src) / sizeof(src[0]);
	char	dst[sz];
	int		ok;

	ok = ft_strlcpy(dst, src, sz) == strlen(src);
	print_test_result(ok, "The function returns the length of src.");
	return (ok);
}

int	test1(void)
{
	size_t	sz = 1;
	char	str[sz];
	int		ok;

	str[0] = 0x7F;
	ft_strlcpy(str, "lorem ipsum dolor sit amet", sz);
	ok = str[0] == '\0';
	print_test_result(ok, "The function NUL-terminate the result as long size is larger than 0.");
	return (ok);
}

int	test2(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	size_t	sz = sizeof(src) / sizeof(src[0]);
	char	dst[sz];
	int		ok;
	size_t	i;

	memset((void *)dst, 'z', sz);
	ft_strlcpy(dst, src, 0);
	ok = 1;
	i = 0;
	while (i < sz)
	{
		if (dst[i] == '\0')
		{
			ok = 0;
			break ;
		}
		i++;
	}
	print_test_result(ok, "The function does not NUL-terminate the result if size is 0."); 
	return (ok);
}

int	test3(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	dst[sizeof(src) / sizeof(src[0])];
	int		ok;

	ft_strlcpy(dst, src, 6);
	ok = strcmp(dst, "lorem") == 0;
	print_test_result(ok, "The function copies up to size - 1 characters from the NUL-terminated string src to dst."); 
	return (ok);
}

int	main(void)
{
	print_test_title("size_t ft_strlcpy(char *dst, const char *src, size_t size)");
	test0();
	test1();
	test2();
	test3();
	return (0);
}

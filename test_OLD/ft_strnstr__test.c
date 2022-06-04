#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);

int	test0()
{
	char	str[] = "alpha bravo";
	int		ok;

	ok = ft_strnstr(str, "", strlen(str)) == str;
	print_test_result(ok, "If the string needle is empty, the function returns the string "
		"haystack.");
	return (ok);
}

int	test1()
{
	char	str[] = "alpha bravo";
	int		ok;

	ok = ft_strnstr(str, "bravo", strlen(str)) == str + 6;
	print_test_result(ok, "If the string needle is not empty and there is an occurrence of it "
		"in the first n characters of the string haystack, the function returns"
		" a pointer to the occurrence.");
	return (ok);
}

int	test2()
{
	char	str[] = "alpha bravo";
	int		ok;

	ok = ft_strnstr(str, "bravo", strlen(str) - 1) == NULL;
	print_test_result(ok, "If the string needle is not empty and there is no occurrence of it "
		"in the first n characters of the string haystack, the function returns"
		" NULL.");
	return (ok);
}

int	main(void)
{
	print_test_title("char *ft_strnstr(const char *haystack, const char *needle, size_t n)");
	test0();
	test1();
	test2();
	return (0);
}

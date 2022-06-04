#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
char	*ft_strrchr(const char *str, int c);

int	test0()
{
	char	str[] = "lorem ipsum";
	int		ok;

	ok = ft_strrchr(str, 'm') == str + 10;
	print_test_result(ok, "The function returns a pointer to the last occurrence of the "
		"character c in the string str if it is found.");
	return (ok);
}

int	test1()
{
	char	str[] = "lorem ipsum";
	int		ok;

	ok = ft_strrchr(str, 'x') == NULL;
	print_test_result(ok, "The function returns NULL if the character c is not found in the"
		"string str.");
	return (ok);
}

int	test2()
{
	char	str[] = "lorem ipsum";
	int		ok;

	ok = ft_strrchr(str, '\0') == str + strlen(str);
	print_test_result(ok, "The terminating null byte is considered part of the string, so that"
		" if c is specified as '\\0', the function returns a pointer to the "
		"terminator.");
	return (ok);
}

int	main(void)
{
	print_test_title("char *ft_strrchr(const char *str, int c)");
	test0();
	test1();
	test2();
	return (0);
}

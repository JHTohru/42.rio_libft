#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
int		ft_strncmp(const char *str1, const char *str2, size_t n);

int	test0()
{
	char	str1[] = "alpha bravo";
	char	str2[] = "alpha charlie";
	int		ok;

	ok = ft_strncmp(str1, str2, sizeof(str1)) < 0;
	print_test_result(ok, "The function returns an integer less than zero if the first (at "
		"most) n bytes of str1 are found to be less than the same amount of the"
		" first bytes of str2.");
	return (ok);
}

int	test1()
{
	char	str1[] = "alpha bravo";
	char	str2[] = "alpha charlie";
	int		ok;

	ok = ft_strncmp(str1, str2, 5) == 0;
	print_test_result(ok, "The function returns an integer equal to zero if the first (at "
		"most) n bytes of str1 are found to match the same amount of the first "
		"bytes of str2.");
	return (ok);
}

int	test2()
{
	char	str1[] = "alpha charlie";
	char	str2[] = "alpha bravo";
	int		ok;

	ok = ft_strncmp(str1, str2, sizeof(str1)) > 0;
	print_test_result(ok, "The function returns an integer greater than zero if the first (at "
		"most) n bytes of str1 are found to be greater than the same amount of "
		"the first bytes of str2.");
	return (ok);
}

int	main(void)
{
	print_test_title("int ft_strncmp(const char *str1, const char *str2, size_t n)");
	test0();
	test1();
	test2();
	return (0);
}

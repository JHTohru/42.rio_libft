#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
size_t	ft_strlen(const char *str);

int	test0()
{
	int		ok;

	ok = ft_strlen("lorem ipsum") == 11;
	print_test_result(ok, "An non empty string parameter must return its length.");
	return (ok);
}

int	test1()
{
	int		ok;

	ok = ft_strlen("") == 0;
	print_test_result(ok, "An empty string parameter must return 0.");
	return (ok);
}

int	main(void)
{
	print_test_title("size_t ft_strlen(const char *str)");
	test0();
	test1();
	return (0);
}

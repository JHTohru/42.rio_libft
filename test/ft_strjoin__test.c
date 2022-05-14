#include <stdlib.h>
#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
char	*ft_strjoin(const char *str1, const char *str2);

int	test0(void)
{
	char	*str;
	int		ok;

	str = ft_strjoin("lorem", " ipsum");
	ok = strcmp(str, "lorem ipsum") == 0;
	free(str);
	print_test_result(ok, "It must return a new string, which is the result of "
		"the concatenation of 'str1' and 'str2'.");
	return (ok);
}

int	main(void)
{
	print_test_title("char *ft_strjoin(const char *str1, const char *str2)");
	test0();
	return (0);
}

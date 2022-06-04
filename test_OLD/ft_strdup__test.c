#include <stdlib.h>
#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
void	*ft_strdup(const char *str);

int	test0()
{
	char	*str = "lorem ipsum";
	char	*dup;
	int		ok;

	dup = ft_strdup(str);
	ok = dup != str && strcmp(str, dup) == 0;
	free(dup);
	print_test_result(ok, "It must return a pointer to a new string which is a"
		" duplicate of the string str.");
	return (ok);
}

int	main(void)
{
	print_test_title("ft_strdup(const char *str)");
	test0();
	return (0);
}

#include <stdlib.h>
#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
char	*ft_substr(char const *str, unsigned int start, size_t len);

int	test0(void)
{
	char	*src = "lorem ipsum";
	char	*xres = "ipsum";
	char	*res = ft_substr(src, 6, 5);
	int		ok = strcmp(xres, res) == 0;

	if (!ok)
	{
		fail("The function did not return the expected substring.");
		show_diff_str(res, xres);
	}
	free(res);
	return (ok);
}

int	test1(void)
{
	char	*src = "lorem ipsum";
	size_t	size = sizeof(src);
	char	*res = ft_substr(src, 0, strlen(src));
	int		ok = res != NULL && (res + size < src || res > src + size);

	if (!ok)
		fail("The function did not return a pointer to a new string.");
	free(res);
	return (ok);
}

int main(void)
{
	print_test_title("char *ft_substr(char const *str, unsigned int start, size_t len)");
	test0();
	return (0);
}

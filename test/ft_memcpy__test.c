#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
void	*ft_memcpy(void *d, const void *s, size_t n);

int	test0()
{
	char	s[] = "lorem ipsum dolor sit amet consectetur dolor adpisch elit";
	size_t	n = sizeof(s) / sizeof(s[0]);
	char	d[n];
	int		ok;

	bzero(d, n);
	ft_memcpy(d, s, n);
	ok = memcmp(s, d, n) == 0;
	print_test_result(ok, "The first n bytes from src memory area must be copied to the dst memory area.");
	return (ok);
}

int	main(void)
{
	print_test_title("void *ft_memcpy(void *d, const void *s, size_t n)");
	test0();
	return (0);
}

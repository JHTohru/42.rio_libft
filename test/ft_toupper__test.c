#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
int		ft_toupper(int c);

int	test0()
{
	char	lower[] = "abcdefghijklmnopqrstuvwxyz";
	char	upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int		ok;
	int		i;

	ok = 1;
	i = 0;
	while (i < 26)
	{
		if (ft_toupper(lower[i]) != upper[i])
		{
			ok = 0;
			break ;
		}
		i++;
	}
	print_test_result(ok, "If c is a lowercase letter, the function returns its uppercase "
		"equivalent.");
	return (ok);
}

int	test1()
{
	char nlower[] = "\001\002\003\004\005\006\007\b\t\n\v\f\r\016\017\020\021 !"
					"\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ"
					"[\\]^_`{|}~\177";
	size_t	i;
	int		ok;

	ok = 1;
	i = 0;
	while (i < sizeof(nlower))
	{
		if (ft_toupper(nlower[i]) != (int)nlower[i])
		{
			ok = 0;
			break ;
		}
		i++;
	} 
	print_test_result(ok, "If c is not a lowercase letter, the function returns c.");
	return (ok);
}

int	main(void)
{
	print_test_title("int ft_toupper(int c)");
	test0();
	test1();
	return (0);
}

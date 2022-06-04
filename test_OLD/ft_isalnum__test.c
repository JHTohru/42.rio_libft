#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
int		ft_isalnum(int c);

int	test0()
{
	char	str[] = "0123456789"
					"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
					"abcdefghijklmnopqrstuvwxyz";
	size_t	i;
	int		ok;

	ok = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isalnum(str[i]))
		{
			ok = 0;
			break ;
		}
		i++;
	}
	print_test_result(ok, "Alphanumeric parameters must return true.");
	return (ok);
}

int	test1()
{
	char	str[] = "\001\002\003\004\005\006\007\b\t\n\v\f\r\016\017\020\021"
					"\022\023\024\025\026\027\030\031\032\033\034\035\036\037"
					" !\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~\177";
	size_t	i;
	int		ok;

	ok = 1;
	i = 0;
	while (i < sizeof(str))
	{
		if (ft_isalnum(str[i]))
		{
			ok = 0;
			break ;
		}
		i++;
	}
	print_test_result(ok, "Non-alphanumeric parameters must return false.");
	return (!ok);
}

int	main(void)
{
	print_test_title("int ft_isalnum(int c)");
	test0();
	test1();
	return (0);
}

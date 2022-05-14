void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
int		ft_isascii(int c);

int	test0()
{
	int		ok;

	ok = ft_isascii('a');
	print_test_result(ok, "ASCII parameters must return true.");
	return (ok);
}

int	test1()
{
	int		ok;

	ok = !ft_isascii(256);
	print_test_result(ok, "Non-ASCII parameters must return false.");
	return (ok);
}

int	main(void)
{
	print_test_title("int ft_isascii(int c)");
	test0();
	test1();
	return (0);
}

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
int		ft_atoi(const char *nptr);

int	test0()
{
	int		ok;

	ok = ft_atoi(" \f\n\r\t\v-2147483648 alpha bravo") == -2147483648;
	print_test_result(ok, "The function converts the initial part of the "
		"string in nptr to an integer value. The string may begin with an "
		"arbitrary amount of white space (as determined by isspace(3)) followed"
		" by a single optional '+' or '-' sign. The remainder of the string is "
		"converted to an int value in the obvious manner, stopping at the first"
		" character which is not a valid decimal digit.");
	return (ok);
}

int	main(void)
{
	print_test_title("int ft_atoi(const char *nptr)");
	test0();
	return (0);
}

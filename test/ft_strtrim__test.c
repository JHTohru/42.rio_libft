#include <stdlib.h>
#include <string.h>

void	print_test_title(char *msg);
void	print_test_result(int ok, char *msg);
char	*ft_strtrim(const char *str, const char *set);

/*
* Considerando meu codigo atual, se eu remover a verificação de NUL ao
* percorrer 'str', o teste abaixo passa, mas haverá bug caso todos os caracteres
* de 'str' estejam também contidos em 'set'.
*/
int	test0(void)
{
	char	*str;
	int		ok;

	str = ft_strtrim("-=xXxlorem ipsumxXx=-", "-=xX");
	ok = strcmp(str, "lorem ipsum") == 0;
	free(str);
	print_test_result(ok, "It returns a copy of 'str' with the characters "
		"specified in 'set' removed from the beginning and the end of the "
		"string.");
	return (ok);
}

int	main(void)
{
	print_test_title("char *ft_strtrim(const char *str, const char *set)");
	test0();
	return(0);
}

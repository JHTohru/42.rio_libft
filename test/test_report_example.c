#include "ansi_color_codes.h"
#include <stdio.h>

#define LF "\n"
#define BULLET "\u2022"
int	main(void)
{
	char	*msg = LF BWHT "char *ft_strtrim(const char *str, const char *set)" RESET LF LF
		"- Returns a copy of 'str' with the characters specified in 'set' removed from the beginning and the end of the string: " RESET LF
		"\t" BULLET " ft_strtrim(\"-=xXxlorem ipsumxXx=-\", \"-=xX\")" RESET LF
		"\t\t" BULLET " Expected result: \"lorem ipsum\"" RESET LF
		"\t\t" BULLET " Actual result:   " BGRN "\"lorem ipsum\"" RESET LF

		LF BWHT "size_t ft_strlcpy(char *dst, const char *src, size_t size)" RESET LF LF
		"- ft_strlcpy must return the length of src." RESET LF
		"\t" BULLET "ft_strlcpy(dst, \"lorem ipsum\", 12)" RESET LF
		"\t\t" BULLET " Expected result: 11" RESET LF
		"\t\t" BULLET " Actual result:   " BGRN "11" RESET LF

		"\t" BULLET "ft_strlcpy(dst, \"\", 1)" RESET LF
		"\t\t" BULLET " Expected result: 0" RESET LF
		"\t\t" BULLET " Actual result:   " BGRN "0" RESET LF

		"- ft_strlcpy must NUL-terminate 'dst' as long 'size' is larger than 0.: " RESET LF

		"\t" BULLET "ft_strlcpy(dst, \"lorem ipsum\", 1); dst[0]" RESET LF
		"\t\t" BULLET " Expected result: '\\0'" RESET LF
		"\t\t" BULLET " Actual result:   " BGRN "'\\0'" RESET LF

		LF LF;

	printf("%s", msg);
	return (0);
}

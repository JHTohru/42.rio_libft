#include "ansi_color_codes.h"
#include <stdio.h>

void	print_test_result(int res, char *msg)
{
	char	*color;

	if (res)
		color = GRN;
	else
		color = RED;
	printf("- %s%s" RESET "\n", color, msg);
}

#include "ansi_color_codes.h"
#include <stdio.h>

void	print_test_title(char *title)
{
	printf(BWHT "%s" RESET ":\n", title);
}

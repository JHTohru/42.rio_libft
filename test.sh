#!/bin/sh

testsdir="./test"
execfile="${testsdir}/${1}__test"
testfile="${execfile}.c"
auxfiles="${testsdir}/print_test_title.c ${testsdir}/print_test_result.c"

gcc -Wall -Wextra -Werror -o "$execfile" \
	"$testfile" ./*.c "$testsdir"/print_test_title.c "$testsdir"/print_test_result.c \
	&& "$execfile"

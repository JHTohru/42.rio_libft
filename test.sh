#!/bin/sh

testsdir="./tests"
execfile="/tmp/${1}_test"
testfile="${testsdir}/${1}_test.c"
auxfiles="${testsdir}/test_utils.c"
libfile="./libft.a"

gcc -Wall -Wextra -Werror -o "$execfile" \
	-I "$testsdir" \
	"$testfile" "$auxfiles" "$libfile" \
	&& "$execfile"
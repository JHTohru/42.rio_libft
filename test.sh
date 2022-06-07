#!/bin/sh

testsdir="./tests"
bindir="${testsdir}/bin"
execfile="${bindir}/${1}_test"
testfile="${testsdir}/${1}_test.c"
auxfiles="${testsdir}/test_utils.c"
libfile="./libft.a"

mkdir -p "$bindir"

gcc -Wall -Wextra -Werror -o "$execfile" \
	-I "$testsdir" \
	"$testfile" "$auxfiles" "$libfile" \
	&& "$execfile"
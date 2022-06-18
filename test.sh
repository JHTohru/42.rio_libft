#!/bin/sh

testsdir="./tests"

if [ -z "$1" ]
then
	tests=$(ls ${testsdir}/ft_*_test.c | xargs basename -s _test.c)
	for test in ${tests//\\n/ }; do
		./$0 "$test"
	done
	exit 0
fi

bindir="${testsdir}/bin"
execfile="${bindir}/${1}_test"
testfile="${testsdir}/${1}_test.c"
auxfiles="${testsdir}/test_utils.c"
libfile="./libft.a"

mkdir -p "$bindir"

cc -Wall -Wextra -Werror -o "$execfile" \
	-I "$testsdir" -I ./ \
	"$testfile" "$auxfiles" "$libfile" \
	&& "$execfile"

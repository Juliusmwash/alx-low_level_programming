#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 4)
		exit(0);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	get_op_func(argv[2])(a, b);
	return (0);
}

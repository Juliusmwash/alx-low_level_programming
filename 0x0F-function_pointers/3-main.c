#include "3-calc.h"

/**
 * main - print the value after the call of the function pointer
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, x;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && strcmp(argv[2], "/"))
	{
		printf("Error\n");
		exit(100);
	}
	if (b == 0 && strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(100);
	}
	x = get_op_func(argv[2])(a, b);
	printf("%d\n", x);
	return (0);
}

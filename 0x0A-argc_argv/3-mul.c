#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 (Success), 1 (Error) 
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int n, n1, mult;

		n = atoi(argv[1]);
		n1 = atoi(argv[2]);
		mult = n * n1;

		printf("%d\n", mult);
	}
	return (0);
}

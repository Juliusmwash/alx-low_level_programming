#include <stdio.h>
#include "main.h"

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
		int n = atoi(argv[1]);
		int n1 = atoi(argv[2]);
		int mult = n * n1;

		printf("%d\n", mult);
	}
	return (0);
}

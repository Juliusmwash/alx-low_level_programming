#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc <= 1)
		printf("%d\n", 0);
	else
		printf("%d\n", argc - 1);
	return (0);
}

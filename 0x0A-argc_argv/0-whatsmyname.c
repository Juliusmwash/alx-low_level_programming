#include <stdio.h>
#include "main.h"
/**
 * print_name - prints the new name of the program
 * @s: first argument
 */

void print_name(char *s)
{
	printf("%s\n", s);
}

/**
 * main - calls function print_name
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	print_name(argv[0]);
	return (0);
}

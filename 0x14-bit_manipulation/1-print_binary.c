#include "main.h"

/**
 * print_binary - prints binary codes of a given number
 * @n: number to print its binary codes
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

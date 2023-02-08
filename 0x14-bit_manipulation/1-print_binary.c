#include "main.h"

/**
 * print_binary_helper - prints binary of a given number
 * @n: number to print its binary
 * Return: Nothing
 */

void print_binary_helper(unsigned long int n)
{
	int mods;

	if (n != 0)
	{
	mods = n % 2;
	n = n / 2;
	print_binary_helper(n);
	_putchar(mods + '0');
	}
}

/**
 * print_binary - prints binary numbers
 * @n: number to find its binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar(0 + '0');
	else
	print_binary_helper(n);
}

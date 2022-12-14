#include "main.h"
/**
 * print_sign - prints sign depending on the numbers
 *
 * @c: number used to determine the sign to print
 *
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (0);
	}
}

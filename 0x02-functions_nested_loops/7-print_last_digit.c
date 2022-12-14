#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number which its last digit is printed
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
		return (n);
	}
	else if (n < 0 && n > -9)
	{
		n = -1 * n;
		_putchar(n + '0');
		return (n);
	}
	else if (n >= 10)
	{
		n = n % 10;
		return (n);
	}
	else if (n <= -10)
	{
		n = -1 * n;
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else
		return (0);
}

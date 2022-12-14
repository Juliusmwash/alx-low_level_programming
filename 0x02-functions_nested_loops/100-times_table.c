#include "main.h"
/**
 * print_times_table - print 9 times table
 * @n: number of times to print
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		for (b = 1; b <= n; b++)
		{
			_putchar(',');
			_putchar(' ');
			c = b * a;

			if (c <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (c > 9 && c <= 99)
			{
				_putchar(' ');
				_putchar(c / 10 + '0');
			}
			else
			{
				_putchar(c / 100 + '0');
				c = c % 100;
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
	}
}

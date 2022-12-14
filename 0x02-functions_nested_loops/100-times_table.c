#include "main.h"
/**
 * times_table - print 9 times table
 * @n: number of times to print
 *
 * Return: Always 0
 */
void times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');
			c = b * a;

			if (c <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
		
	}
	}
}

#include "main.h"

/**
* print_number - prints an integer
*@n:integer to be printed
*
*/
void print_number(int n)
{
	int m;

	if (n >= 0)
	{
	if (n < 10)
	{
		_putchar(n + '0');
		_putchar(10);
	}
	else if (n < 100)
	{
		m = n / 10;
		_putchar(m + '0');
		m = n % 10;
		_putchar(m + '0');
		_putchar(10);
	}
	else if (n < 1000)
	{
		m = n / 100;
		_putchar(m + '0');
		m = n % 100;
		n = m / 10;
		_putchar(n + '0');
		n = n % 10;
		_putchar(n + '0');
		_putchar(10);
	}
	else if (n < 10000)
	{
		m = n / 1000;
		_putchar(m + '0');
		m = n % 1000;
		n = m / 100;
		_putchar(n + '0');
		n = n % 100;
		m = n / 10;
		_putchar(m + '0');
		m = m % 10;
		_putchar(m + '0');
		_putchar(10);
	}
	}
	else
	{
		_putchar('-');
		m = -1 * n;
		if (m < 10)
		{
			_putchar(m + '0');
			_putchar(10);
		}
		else if (m < 100)
		{
			n = m / 10;
			_putchar(n + '0');
			n = m % 10;
			_putchar(n + '0');
			_putchar(10);
		}
		else if (m < 1000)
		{
			n = m / 100;
			_putchar(n + '0');
			n = m % 100;
			m = n / 10;
			_putchar(m + '0');
			m = n % 10;
			_putchar(m + '0');
			_putchar(10);
		}
		else if (m < 10000)
		{
			n = m / 1000;
			_putchar(n + '0');
			n = m % 1000;
			m = n / 100;
			_putchar(m + '0');
			m = n % 100;
			n = m / 10;
			_putchar(n + '0');
			n = m % 10;
			_putchar(n + '0');
			_putchar(10);
		}
	}

}

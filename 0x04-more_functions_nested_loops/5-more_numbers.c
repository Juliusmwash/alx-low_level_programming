#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 11; a++)
	{
		for (b = 0; b < 15; b++)
		{
			_putchar(b + '0');
		}
		_putchar(10);
	}
}

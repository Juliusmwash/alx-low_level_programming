#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int a = 0;
	int b;
	int c;

	while (a == 0)
	{
		b = 0;
		while (*(s+b) != '\0')
		{
			b += 1;
		}
		b = b - 1;
		c = 0;
		while (b >= c)
		{
			_putchar(*(s+ b));
			c--;
		}
		_putchar('\n');
	}
}

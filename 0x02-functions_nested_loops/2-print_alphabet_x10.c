#include "main.h"
/**
 * print_alphabet_x10 - print alphabets from a to z 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		int d;

		for (d = 'a'; c <= 'z'; c++)
			_putchar(d);
	}
	_putchar('\n');
}

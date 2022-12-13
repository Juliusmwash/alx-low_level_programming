#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout 
 * @c: The character to print
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

#include <unistd.h>
#include "main.h"

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

void print_alphabet()
{
	char c;

	for (c = 'a'; c < 'z'; c++)
		_putchar(c);
	_putchar(\n);
}

int main(void)
{
	print_alphabet();
	return (0;
}

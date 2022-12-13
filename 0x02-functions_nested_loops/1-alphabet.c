#include <unistd.h>
#include "main.h"

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return (0);
}

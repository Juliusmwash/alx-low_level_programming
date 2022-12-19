#include "main.h"
/**
 * _puts - prints the string on the stdout
 *
 * Return: Always 0
 */
void _puts(char *s)
{
	int len = 0;

	while (*(s+len) != '\0')
	{
		_putchar(*(s+len));
	}
	_putchar('\n');
}

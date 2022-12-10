#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c <= 'z'; c--)
	{
		if (c >= 'a')
			putchar(c);
		else
		{
			putchar('\n');
			break;
		}
	}
	return (0);
}

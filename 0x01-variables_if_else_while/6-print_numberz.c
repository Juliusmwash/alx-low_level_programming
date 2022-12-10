#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c [10] = {"0123456789"};

	for (i = 0; i < 10; i++)
		putchar(c[i]);
	putchar('\n');

	return (0);
}

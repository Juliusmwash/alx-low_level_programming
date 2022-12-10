#include <stdio.h>

/*
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int g;

	for (g = '0'; g <= '9'; g++)
		putchar(g);
	putchar('\n');

	return (0);
}

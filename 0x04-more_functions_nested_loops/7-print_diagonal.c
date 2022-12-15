#include "main.h"
/**
 * print_diagonal - prints a diagonal line in the terminal
 * @a: number or characters to print
 *
 * Return: Always 0
 */
void print_diagonal(int a)
{	int b = 0;
	int c;
	int i;

	if (a <= 0)
	{
		putchar(10);
	}
	else
	{
		for (i = 0; i < a; i++)
		{
			c = i + 1;
			b = 0;
			for (b = 0; b < c; b++)
			{
				if (b > 0)
					putchar(' ');
			}
			putchar(92);
			putchar('\n');
		}
	}
}

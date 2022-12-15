#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	long int a = 0;
	long int b = 1;
	long int c = 0;
	int d;

	for (d = 0; d < 50; d++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
		if (d != 49)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}

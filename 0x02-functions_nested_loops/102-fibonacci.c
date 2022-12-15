#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int c = 0;
	int d;

	for (d = 0; d < 50; a++)
	{
		c = a + b;
		printf("%d", c);
		a = b;
		b = c;
		if (d != 50)
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

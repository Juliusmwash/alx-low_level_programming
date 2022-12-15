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
	long int sum = 0;

	for (d = 0; d < 4000000; d++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			sum += c;
		}
	}
	printf("%lu", sum);
	return (0);
}

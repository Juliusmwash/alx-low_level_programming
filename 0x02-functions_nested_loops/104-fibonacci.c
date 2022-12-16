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
	long int sum = 0;
	int d = 0;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		for (d = 0; d <= 98; d++)
		{
			if(d != 98)
				printf("%lu, ", c);
			else
				printf("%lu", c);
		}
		if (d == 98)
			break;
	}
	return (0);
}

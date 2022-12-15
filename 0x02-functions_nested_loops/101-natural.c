#include <stdio.h>
/**
 * main - entry
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int sum = ;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}

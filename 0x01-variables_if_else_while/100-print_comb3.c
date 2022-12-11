#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i ='0';

	while (i <= '8')
	{
		int j = i + 1;

		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if ((i + j) != 113)
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}
		
		i++;
	}
	putchar('\n');
}


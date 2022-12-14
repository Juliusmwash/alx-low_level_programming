#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from a given number to 98
 * @n: starting number
 *
 * Return: Always 0
 */
int print_to_98(int n)
{
	int a;

	for (a = n; a <= 98; a++)
	{
		if(a != 98)
			printf("%d, ", a);
		else
			printf("%d", a);
	}
	putchar('\n');
	return (0);
}

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all the numbers given as arguments
 * @separator: Separates the numbers as they are printed
 * @n: count of all the numbers given
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (separator == NULL || n == 0)
		exit(0);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(args, int));
			exit(0);
		}
		printf("%d%s", va_arg(args, int), separator);
	}
	va_end(args);
}

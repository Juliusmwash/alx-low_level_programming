#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints out all the given strings
 * @separator: separates given strings during printing
 * @n: count of all the strings
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL && i != n - 1)
		{
			if (separator == NULL)
				printf("(nil)");
			else
				printf("(nil)%s", separator);
		}
		else if (s == NULL && i == n - 1)
			printf("(nil)");
		else if (s != NULL && i != n - 1)
		{
			if (separator == NULL)
				printf("%s", s);
			else
				printf("%s%s", s, separator);
		}
		else if (s != NULL && i == n - 1)
			printf("%s", s);
	}
	putchar(10);
	va_end(args);
	}
}

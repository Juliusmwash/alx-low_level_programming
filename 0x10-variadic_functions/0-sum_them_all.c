#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all the given integers
 * @n: number of integers to add
 *
 * Return: sum of all the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}

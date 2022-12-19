#include "main.h"
/**
 * swap_int - swaps two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 * ABS - computes absolute value of a number
 * @a: number to find its absolute value
 *
 * Return: Absolute value of a
 */

int ABS(int a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}

#endif

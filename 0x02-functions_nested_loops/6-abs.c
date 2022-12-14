#include "main.h"
/**
 * _abs - prints absolute value of an int
 *
 * @c: number to get its absolute value
 *
 * Return: Always 0
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	else if (c < 0)
	{
		c = -1 * c;
		return (c);
	}
}

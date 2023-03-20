#include "main.h"
/**
 * _isdigit - checks for digit characters
 * @c: character being checked
 *
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

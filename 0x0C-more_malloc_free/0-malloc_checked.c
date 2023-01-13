#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of the allocated memory
 *
 * Return: Allocated memory address
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}

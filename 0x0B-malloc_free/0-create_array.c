#include "main.h"

/**
 * create_array - returns a pointer to array
 * @size: size of the dynamic array
 * @c: character being used to fill array
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = (char *)malloc(size * sizeof(unsigned int));
	if (s == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
			s[i] = c;
	return (s);
}

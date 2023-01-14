#include "main.h"

/**
 * _calloc - function allocating and initializing memory with 0
 * @nmemb: number of elements
 * @size: size of the data type
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, len;
	char *s;
	int *s1;

	len = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size == sizeof(char))
	{
		s = malloc(len);
		if (s == NULL)
			return (NULL);
		i = 0;
		while (i < len)
		{
			*(s + i) = 0;
			i++;
		}
		return (s);
	}
	else if (size == sizeof(int))
	{
		s1 = malloc(len);
		if (s1 == NULL)
			return (NULL);
		i = 0;
		while (i < len)
		{
			s1[i] = 0;
			i++;
		}
		return (s1);
	}
	return (NULL);
}

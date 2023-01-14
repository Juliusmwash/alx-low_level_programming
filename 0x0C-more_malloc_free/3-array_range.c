#include "main.h"

/**
 * array_range - function containing ints from min to max
 * @min: minimum int given
 * @max: maximum int given
 *
 * Return: pointer to allocated memory containing ints
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	count = max + 1 - min;
	if (min > max)
		return (NULL);
	if (min == max)
	{
		arr = malloc(sizeof(int) * 2);
		if (arr == NULL)
			return (NULL);
		i = 0;
		while (i < 2)
		{
			s[i] = min;
			i++;
		}
		return (arr);
	}
	arr = malloc(count);
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		s[i] = min;
		min++;
		i++;
	}
	return (arr);
}

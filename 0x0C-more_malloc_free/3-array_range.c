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
	int count, i;
	int *arr;

	i = 0;
	count = max + 1 - min;
	if (min > max)
		return (NULL);
	arr = malloc(count);
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

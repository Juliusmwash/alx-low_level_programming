#include "search_algos.h"

/**
 * linear_search - search for a value using a linear search algorithim.
 * @array: array to be searched.
 * @size: size of the array.
 * @value: value to search for in the array.
 * Return: 0 if value found. Otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

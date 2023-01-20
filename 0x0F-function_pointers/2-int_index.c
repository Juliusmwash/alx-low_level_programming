#include "function_pointers.h"

/**
 * int_index - returns index of an integer if it meets certain conditions
 * @array: Array of integers
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array ==  NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] > 0)
			return (i);
	}
	return (-1);
}

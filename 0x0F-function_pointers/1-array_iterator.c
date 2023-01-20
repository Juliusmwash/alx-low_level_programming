#include "function_pointers.h"

/**
 * array_iterator - prints elements of the array
 * @array: Array of ints
 * @size: Number of elements in the array
 * @action: pointer to a function
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}

#include "search_algos.h"

/**
 * interpolation_search - interpolation search algorithim.
 * @array: array to be searched.
 * @size: size of the array;
 * @value: value to search for.
 * Return: index of the found value. Otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		position = left +
			(((double)(right - left)) / (array[right] - array[left])) *
			(value - array[left]);

		if (position < size)
			printf("Value checked array[%ld] = [%d]\n", position, array[position]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", position);
			break;
		}

		if (array[position] == value)
			return (position);
		if (array[position] > value)
			right = position - 1;
		else
			left = position + 1;
	}

	return (-1);
}


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
	int low, high;
	size_t position;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;


	while (low <= high && value >= array[low] && value <= array[high])
	{
		position = low + (((double)(high - low) / (array[high] - array[low])) * (
value - array[low]));
		if (low == high)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%lu] = [%d]\n", position, array[position]);
				return (low);
			}
			return (-1);
		}

		if (array[position] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", position, array[position]);
			return (position);
		}

		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;
		printf("Value checked array[%lu] = [%d]\n", position, array[position]);
	}
	printf("Value checked array[2109] is out of range\n");
	return (-1);
}

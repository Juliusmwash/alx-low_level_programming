#include "search_algos.h"

/**
 * exponential_search - exponential search algorithim.
 * @array: array to be searched.
 * @size: size of the array.
 * @value: value to search for.
 * Return: index of the found value. Otherwise -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound, left, right;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	bound = 1;
	while (bound < (int) size && array[bound] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < (int) size) ? bound : (int)size - 1;
	printf("Value found between indexes [%d] and [%d]\n", left, right);

	return (binary_search2(array, left, right, value));
}

/**
 * binary_search2 - binary search algorithim.
 * @array: array to be searched.
 * @left: left most value of the array/sub-array.
 * @right: right most value of the array/sub-array.
 * @value: value to search for.
 * Return: found value index or -1 if not found.
 */
int binary_search2(int *array, int left, int right, int value)
{
	int mid, i;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}


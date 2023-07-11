#include "search_algos.h"

/**
 * binary_search_helper - Finds the target value in the array.
 * @left: left most value of the array/sub-array.
 * @rt: right most value of the array/sub-array.
 * @value: value to search in the array;
 * @array: array being searched for the value
 * Return: index of the found value or -1 if not found
 */
int binary_search_helper(int left, size_t rt, int value, int *array)
{
	int mid, right, i;

	right = (int) rt;

	while (left <= right)
	{
		i = left;
		printf("Searching in array: ");
		for (; i <= right; i++)
		{
			if (i == left)
				printf("%d", array[i]);
			else
				printf(", %d", array[i]);
		}
		putchar(10);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * binary_search - driver function.
 * @array: array to search for the value.
 * @size: size of the array.
 * @value: value to search for
 * Return: index of the found value or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);
	index = binary_search_helper(0, size - 1, value, array);
	return (index);
}

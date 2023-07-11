#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (recursive_advanced_binary(array, 0, size - 1, value));
}

/**
 * recursive_advanced_binary - Recursive helper function for advanced_binary
 * @array: Pointer to the first element of the array to search in
 * @start: The starting index of the current subarray
 * @end: The ending index of the current subarray
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int recursive_advanced_binary(int *array, int start, int end, int value)
{
	int mid, i;

	if (start > end)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");

	mid = (start + end) / 2;

	if (array[mid] == value)
	{
		if (array[mid - 1] == value)
			return (recursive_advanced_binary(array, start, mid, value));
		else
			return (mid);
	}
	else if (array[mid] > value)
		return (recursive_advanced_binary(array, start, mid - 1, value));
	else
		return (recursive_advanced_binary(array, mid + 1, end, value));
}


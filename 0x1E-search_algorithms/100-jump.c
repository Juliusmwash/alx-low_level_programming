#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for value using jump search algorithim.
 * @array: array to be sarched.
 * @size: size of the array.
 * @value: value to look for.
 * Return: index of the found value. Otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int step, prev;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	prev = 0;
	printf("Value checked array[%d] = [%d]\n", prev
, prev);
	/* Finding the block where the target may reside */
	while (array[(int)fmin(step, size)] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= (int) size - 1)
			break;
		printf("Value checked array[%d] = [%d]\n", prev, prev);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	if (prev > (int) size - 1)
		return (-1); /* No such value in the array */
    /* Performing a linear search within the identified block */
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, prev);
		prev++;
		if (prev == fmin(step, size))
			break;
	}
    /* If the target element is found */
	if (array[prev] == value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, prev);
		return (prev);
	}
	return (-1);  /* Target element not found */
}

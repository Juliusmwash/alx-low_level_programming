#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not present or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *prev, *curr;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (prev = curr = list; curr->index + 1 < size && curr->n < value;)
	{
		prev = curr;
		for (step += step_size; curr->index < step; curr = curr->next)
		{
			if (curr->index + 1 == size)
				break;
		}
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, curr->index);

	for (; prev->index < curr->index && prev->n < value; prev = prev->next)
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

	return (prev->n == value ? prev : NULL);
}


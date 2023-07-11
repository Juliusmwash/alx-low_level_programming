#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where the value is located,
 *         or NULL if the value is not present in the list or if the head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express;

	if (list == NULL)
		return (NULL);

	express = list->express;

	printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
	while (express && express->n < value)
	{
		list = express;
		express = express->express;
		if (!express)
			break;
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
	}

	if (!express)
	{
		express = list;
		while (express->next)
			express = express->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       list->index, express->index);

	while (list && list->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}

	if (list && list->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		return (list);
	}

	return (NULL);
}


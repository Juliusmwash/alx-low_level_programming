#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements in the list
 * @h: pointer to the head of the linked list
 * Return: number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next
	}
	return (count);
}

#include "lists.h"
/**
 * list_len - function printing all the items in a linked list
 * @h: linked list
 * Return: count of the elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		h = h->next;
		count += 1;
	}

	return (count);
}

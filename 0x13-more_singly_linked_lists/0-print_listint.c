#include "lists.h"

/**
 * print_listint - prints all the elements of the list
 * @h: head pointer to the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

#include "lists.h"

/**
 * print_list - function printing all the items in a linked list
 * @h: linked list
 * Return: count of the items printed
 */
size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] %s\n", (nil));
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		count += 1;
	}
	return (count);
}

#include "lists.h"

/**
 * print_list - function printing all the items in a linked list
 * @h: linked list
 * Return: count of the items printed
 */
size_t print_list(const list_t *h)
{
	int count;
	char *s;

	count = 0;
	while (h != 0)
	{
		s = tmp->str;
		if (s == NULL)
			s = "(nil)";
		printf("[%d] %s", tmp->len, s);
		h = h->next;
		count += 1;
	}
	return (count);
}

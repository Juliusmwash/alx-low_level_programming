#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: pointer to head of the linked list
 * @idx: index to insert node
 * @n: element to add to the node
 * Return: newly created node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int check = 0;
	dlistint_t *tmp, *tmp1;

	tmp = *h;
	while (tmp != NULL)
	{
		if (idx == 0)
			add_dnodeint(h, n);
		else if (check == idx)
		{
			tmp1 = malloc(sizeof(dlistint_t));
			if (tmp1 == NULL)
				return (NULL);
			tmp1->n = n;
			tmp->prev->next = tmp1;
			tmp1->prev = tmp->prev;
			tmp1->next = tmp;
			tmp->prev = tmp1;
			return (tmp1);
		}
		check += 1;
		tmp = tmp->next;
	}
	return (NULL);
}

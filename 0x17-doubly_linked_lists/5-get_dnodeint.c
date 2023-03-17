#include <stdlib.h>
#include "lists.h"


/**
 * get_dnodeint_at_index - gets node at the given index
 * @head: head pointer of the linked list
 * @index: index to return the node if any
 * Return: node at the given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int check = 1;

	tmp = head;
	if (tmp == NULL)
		return (NULL);
	while (tmp->next != NULL)
	{
		if (index == check - 1)
			return (tmp);
		check += 1;
		tmp = tmp->next;
	}
	return (NULL);
}

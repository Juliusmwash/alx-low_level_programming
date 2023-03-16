#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free linked list allocated memory
 * @head: head pointer of the linked list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *tmp1;

	tmp = head;
	while (tmp != NULL)
	{
		tmp1 = tmp->next;
		free(tmp);
		tmp = tmp1;
	}
}

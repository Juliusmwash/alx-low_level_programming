#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - finds sum of elements in the linked list
 * @head: head pointer of the linked list
 * Return: sum of the elements
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

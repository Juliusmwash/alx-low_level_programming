#include "lists.h"

/**
 * pop_listint - deletes first node
 * @head: linked list first node
 * Return: head's node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	size_t data;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;
	free(tmp);
	tmp = NULL;
	return (data);
}

#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: pointer to linked list head
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while(*head)
	{
		tmp = *head;
		if ((*head)->next)
		{
			*head = tmp->next;
			free(tmp);
			tmp = NULL;
		}
		else
		{
			free(tmp);
			*head = NULL;
			tmp = NULL;
		}
	}
}

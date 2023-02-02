#include "lists.h"

/**
 * free_listint - frees list
 * @head: linked list head
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
		tmp = NULL;
	}
}

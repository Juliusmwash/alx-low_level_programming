#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function adding list node at the end
 * @head: list head
 * @n: data to add to the list
 * Return: pointer to newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *mem;

	temp = *head;
	mem = malloc(sizeof(struct listint_s));
	if (mem == NULL)
		return (NULL);
	mem->n = n;
	mem->next = NULL;

	if (*head == NULL)
		*head = mem;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = mem;
	}
	return (mem);
}

#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *mem;

	temp = *head;
	while (temp->next)
		temp = temp->next;
	mem = malloc(sizeof(struct listint_s));
	if (mem == NULL)
		return (NULL);
	temp->next = mem;
	return (mem);
}

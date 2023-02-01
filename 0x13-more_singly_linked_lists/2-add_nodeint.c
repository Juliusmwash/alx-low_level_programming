#include "lists.h"

/**
 * add_nodeint - adds list node at the beginning
 * @head: pointer to the head pointer
 * @n: data to add
 * Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp, *mem;

	mem = malloc(sizeof(struct listint_s));
	if (mem == NULL)
		return (NULL);
	mem->n = n;

	if (*head == NULL)
	{
		mem->next = NULL;
		*head = mem;
	}
	else
	{
		tmp = *head;
		mem->next = tmp;
		*head = mem;
	}
	return (mem);
}

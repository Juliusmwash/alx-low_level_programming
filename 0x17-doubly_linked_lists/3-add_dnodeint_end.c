#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of the list
 * @head: pointer to the head of the linked list
 * @n: item to add to the linked list
 * Return: newly created node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = NULL;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	
	tmp = *head;
	if (tmp == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while(tmp->next != NULL)
		tmp = tmp->next;

	newNode->prev = tmp;
	tmp->next = newNode;

	return (newNode);
}

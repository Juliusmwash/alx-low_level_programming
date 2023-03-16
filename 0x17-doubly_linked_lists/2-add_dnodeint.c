#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - creates and adds a new node to head
 * @head: pointer to the head of the linked list
 * @n: element to add to the linked list
 * Return: created node or null if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}

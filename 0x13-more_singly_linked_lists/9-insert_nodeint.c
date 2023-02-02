#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node
 * @head: first node
 * @idx: index to add node
 * @n: data to add
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *temp, *mem, *temp1;

	mem = malloc(sizeof(struct listint_s));
	if (mem == NULL)
		return (NULL);
	mem->n = n;
	temp = *head;
	temp1 = *head;
	count = 0;
	while (count < idx)
	{
		if (temp)
		{
		temp = temp->next;
		count++;
		}
		else
			break;
	}
	count = 0;
	while (count <= idx)
	{
		if (temp1)
		{
		temp1 = temp1->next;
		count++;
		}
		else
			return (0);
	}
	if (idx == 0)
	{
		mem->next = temp;
		*head = mem;
	}
	else
	{
	mem->next = temp1;
	temp->next = mem;
	}
	return (mem);
}

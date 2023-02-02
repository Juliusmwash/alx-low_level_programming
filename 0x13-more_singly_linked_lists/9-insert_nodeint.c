#include "lists.h"

/**
 * insert_nodeint_helper - performs necessary operations to enhance insertion
 * @temp: pointer to linked list
 * @temp1: pointer to linked list
 * @idx: index to insert the node
 * Return: Nothing
 */
int insert_nodeint_helper(listint_t **temp,  listint_t **temp1,  unsigned int idx)
{
	unsigned int count;

	count = 0;
	while (count < idx - 1)
	{
		if (*temp)
		{
			*temp = (*temp)->next;
			count++;
		}
		if ((*temp)->next == 0)
			return(0);
	}
	count = 0;
	while (count < idx)
	{
		if (*temp1)
		{
			*temp1 = (*temp1)->next;
			count++;
		}
		else
			return (0);
	}
	return (1);
}

/**
 * insert_nodeint_at_index - inserts node
 * @head: first node
 * @idx: index to add node
 * @n: data to add
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *mem, *temp1;
	unsigned int check;

	mem = malloc(sizeof(struct listint_s));
	if (mem == NULL)
		return (NULL);
	mem->n = n;
	if (*head == NULL)
	{
		mem->next = NULL;
		*head = mem;
		return (mem);
	}
	if (idx == 0)
	{
		mem->next = *head;
		*head = mem;
		return(mem);
	}
	temp = *head;
	temp1 = *head;
	check = insert_nodeint_helper(&temp, &temp1, idx);
	if (check == 0)
		return (0);
	if (idx != 0)
	{
	mem->next = temp1;
	temp->next = mem;
	}
	return (mem);
}

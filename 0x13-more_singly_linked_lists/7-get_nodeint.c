#include "lists.h"

/**
 * get_nodeint_at_index - gets the required node
 * @head: linked list first node
 * @index: index of the required node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int count;

	count = 0;
	while(count <= index && head)
	{
		if (count == index)
			return (head);
		else
		{
			head = head->next;
			count++;
		}
	}
	return (NULL);
}

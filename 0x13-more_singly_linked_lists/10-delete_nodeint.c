#include  "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a given index
 * @head: pointer to head of the linked list
 * @index: index of the node to delete
 * Return: 1 if successful or -1 if it fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int check;
	listint_t *temp, *temp1;

	temp = *head;
	temp1 = *head;
	if (*head == 0)
		return (-1);
	if (index > 0)
	{
		check = delete_helper(&temp, &temp1, index);
		if (check == -1)
			return (-1);
	}
	else if (index == 0)
	{
		if ((*head)->next)
		{
		temp1 = temp->next;
		*head = temp1;
		free(temp);
		}
		else
		{
			free(*head);
			*head = NULL;
		}
	}
	else
		return (-1);
	return (1);
}

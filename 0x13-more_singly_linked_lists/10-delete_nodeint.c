#include <stdlib.h>
#include  "lists.h"

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
		check = deleHelper(&temp, &temp1, index);
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

#include <stdlib.h>
#include  "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int count, count1;
	listint_t *temp, *temp1;

	count = 0;
	count1 = 0;
	temp = *head;
	temp1 = *head;
	if (*head == 0)
		return (-1);
	if (index > 0)
	{
		while (count < index - 1)
		{
			temp = temp->next;
			count++;
		}
		while (count1 < index)
		{
			temp1 = temp1->next;
			if (temp1 == 0)
				return (-1);
			count1++;
		}
		if (temp1->next == 0)
		{
			free(temp1);
			temp->next = NULL;
		}
		else
		{
			temp->next = temp1->next;
			free(temp1);
		}
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

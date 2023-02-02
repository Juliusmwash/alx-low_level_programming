#include  "lists.h"

/**
 * delete_helper - performs necessary steps to enable deleting the node
 * @temp: pointer for traversing the list
 * @temp1: pointer for traversing the list
 * @index: index of the node to delete
 */

int delete_helper(listint_t **temp, listint_t **temp1, unsigned int index)
{
	unsigned int count, count1;

	count = 0;
	count1 = 0;
        while (count < index - 1)
        {
		if (*temp)
		{
                *temp = (*temp)->next;
		count++;
		}
		else
			return (-1);
        }
        while (count1 < index)
        {
		*temp1 = (*temp1)->next;
		if (*temp1 == 0)
			return (-1);
		count1++;
	}
	if ((*temp1)->next == 0)
	{
		free(*temp1);
		(*temp)->next = NULL;
	}
	else
	{
		(*temp)->next = (*temp1)->next;
		free(*temp1);
	}
	return (1);
}

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

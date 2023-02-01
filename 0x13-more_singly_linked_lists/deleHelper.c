#include "lists.h"

int delete_helper(listint_t **temp, listint_t **temp1, unsigned int index)
{
	int count, count1;

	count = 0;
	count1 = 0;
        while (count < index - 1)
        {
                *temp = (*temp)->next;
                count++;
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

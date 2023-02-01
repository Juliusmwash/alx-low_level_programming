#include "lists.h"

void delete_helper(listint_t **tmp, listint_t **tmp1)
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
}

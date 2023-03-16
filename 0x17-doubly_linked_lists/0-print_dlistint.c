#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp;
	int count = 0;

	tmp = head;
	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		printf("%d\n");
		tmp = tmp->next;
		count++;
	}
	return (count);
}

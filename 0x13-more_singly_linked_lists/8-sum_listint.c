#include "lists.h"

/**
 * sum_listint - adds all the data in the list;
 * @head: first node of the list
 * Return: sum of all the data in the list
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

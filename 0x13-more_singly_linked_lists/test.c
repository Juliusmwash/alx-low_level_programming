#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * insert_nodeint_helper - performs necessary operations to enhance insertion
 * @temp: pointer to linked list
 * @temp1: pointer to linked list
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
	//printf("head coming: %d\n", (*head)->n);
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

/**
 * add_nodeint_end - function adding list node at the end
 * @head: list head
 * @n: data to add to the list
 * Return: pointer to newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *mem;

	temp = *head;
	mem = malloc(sizeof(struct listint_s));
        if (mem == NULL)
                return (NULL);
        mem->n = n;
        mem->next = NULL;

	if (*head == NULL)
		*head = mem;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = mem;
	}
	return (mem);
}

/**
 * print_listint - prints all the elements of the list
 * @h: head pointer to the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * free_listint2 - frees list
 * @head: pointer to linked list head
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while(*head)
	{
		tmp = *head;
		if ((*head)->next)
		{
			*head = tmp->next;
			free(tmp);
			tmp = NULL;
		}
		else
		{
			free(tmp);
			*head = NULL;
			tmp = NULL;
		}
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *check;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    check = insert_nodeint_at_index(&head, 0, 4096);
    //printf("%p\n", (void *)check);
    print_listint(head);
    if (check == NULL)
            printf("(nil)\n");
    else
    	printf("Running\n");
    free_listint2(&head);
    printf("head: NULL\n");
    check = insert_nodeint_at_index(&head, 0, 4096);
    insert_nodeint_at_index(&head, 0, 4086);
    insert_nodeint_at_index(&head, 1, 4076);
    insert_nodeint_at_index(&head, 1, 4066);
    print_listint(head);
    return (0);
}

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
 * listint_len - calculates the number of elements in the list
 * @h: pointer to head of the list
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
        size_t count;

        count = 0;
        while (h)
        {
                count++;
                h = h->next;
        }
        return (count);
}

/**
 * add_nodeint - adds list node at the beginning
 * @head: pointer to the head pointer
 * @n: data to add
 * Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *tmp, *mem;

        mem = malloc(sizeof(struct listint_s));
        if (mem == NULL)
                return (NULL);
        mem->n = n;

        if (*head == NULL)
        {
                mem->next = NULL;
                *head = mem;
        }
        else
        {
                tmp = *head;
                mem->next = tmp;
                *head = mem;
        }
        return (mem);
}
/**
 * main - check the code
 * 
 * Return: Always 0.
 */

/*
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}*/
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);
    return (0);
}

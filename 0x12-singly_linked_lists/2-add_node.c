#include "lists.h"
#include <string.h>

/**
 * add_node_end - function printing all the items in a linked list
 * @head: pointer to the pointer in the linked list
 * @str: string inside the linked list
 * Return: count of the elements in the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *mem;

	mem = malloc(sizeof(list_t));
	if (mem == NULL)
		return (NULL);
	mem->str = strdup(str);
	mem->len = strlen(str);
	mem->next = *head;
	*head = mem;
	return (mem);
}

#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: string key
 * @value: string value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	if (ht == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	index = key_index((unsigned const char *) key, ht->size);

	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
		if (strcmp(tmp->key, new_node->key) == 0)
		{
			free(tmp->value);
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

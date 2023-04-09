#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to created hash table of null creation fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

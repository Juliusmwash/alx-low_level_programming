#include "hash_tables.h"


/**
 * hash_table_get - gets the value associated with the key
 * @ht: the hash table
 * @key: the key, string
 * Return: value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

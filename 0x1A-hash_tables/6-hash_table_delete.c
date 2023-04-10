#include "hash_tables.h"

/**
 * hash_table_delete - free all the memory used by the hash table
 * @ht: the hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			temp = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

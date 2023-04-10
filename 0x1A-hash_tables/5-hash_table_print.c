#include "hash_tables.h"

/**
 * hash_table_print - prints all the data in the hash table
 * @ht: the hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int i = 0, swtch = 0;

	if (ht == NULL)
		return;
	printf("{");

	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (!swtch)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				swtch = 1;
			}
			else
				printf(", '%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}

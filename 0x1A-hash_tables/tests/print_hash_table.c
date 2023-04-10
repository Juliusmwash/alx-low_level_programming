#include <stdio.h>
#include "hash_tables.h"

void print_hash_table(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0;

	while (i < ht->size)
	{
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		printf("key: %s\nvalue: %s\n", tmp->key, tmp->value);
		tmp = tmp->next;
	}
	printf("END OF BLOCK\n\n");
	i++;
	}
}

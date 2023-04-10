#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


hash_table_t *hash_table_create(unsigned long int size){
        hash_table_t *hash_table;                      
        hash_table = malloc(sizeof(hash_table_t));
        hash_table->size = size;                               if (hash_table == NULL)
                return (NULL);
        hash_table->array = malloc(sizeof(hash_node_t) * size);
        if (hash_table->array == NULL)
        {                                                              free(hash_table);
                return (NULL);                                 }                                              
        return (hash_table);                           }

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}

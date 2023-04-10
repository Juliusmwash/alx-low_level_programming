#include <stdlib.h>
#include <string.h>
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
        printf("(%lu) END OF BLOCK\n\n", i);
        i++;                                                 }
}


/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "heliotropes", "cool");
    hash_table_set(ht, "neurospora", "cool");
    hash_table_set(ht, "hetairas", "cool");
    hash_table_set(ht, "mentioner", "cool");
    hash_table_set(ht, "depravement", "cool");
    hash_table_set(ht, "serafins", "cool");
    hash_table_set(ht, "stylist", "cool");
    hash_table_set(ht, "subgenera", "cool");
    hash_table_set(ht, "joyful", "cool");
    hash_table_set(ht, "synaphea", "cool");
    hash_table_set(ht, "redescribed", "cool");
    hash_table_set(ht, "urites", "cool");
    hash_table_set(ht, "dram", "cool");
    hash_table_set(ht, "vivency", "cool");
    print_hash_table(ht);
    return (EXIT_SUCCESS);
}
/*
hetairas collides with mentioner
heliotropes collides with neurospora
depravement collides with serafins
stylist collides with subgenera
joyful collides with synaphea
redescribed collides with urites
dram collides with vivency
*/

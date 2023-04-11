#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
void shash_table_print2(const shash_table_t *ht);
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "y", "0");
    shash_table_print(ht);
    shash_table_set(ht, "kamau", "23");
    shash_table_print(ht);
    shash_table_set(ht, "kamau", "356");
    shash_table_print(ht);
    shash_table_set(ht, "j", "1");
    shash_table_print(ht);
    shash_table_set(ht, "c", "2");
    shash_table_print(ht);
    shash_table_set(ht, "b", "3");
    shash_table_print(ht);
    shash_table_set(ht, "zebra", "4");
    shash_table_print(ht);
    shash_table_set(ht, "z", "4");
    shash_table_print(ht);
    shash_table_set(ht, "n", "5");
    shash_table_print(ht);
    shash_table_set(ht, "a", "6");
    shash_table_print(ht);
    shash_table_set(ht, "m", "7");
    shash_table_print(ht);
    shash_table_set(ht, "queen", "40");
    printf("-------------------sorted hash table-----\n");
    shash_table_print(ht);
    printf("-------------------reversed sorted hash table----\n");
    shash_table_print_rev(ht);
    printf("-------------------non sorted hash table-----\n");
    shash_table_print2(ht);
    printf("Fetching 'zebra': %s\n", shash_table_get(ht, "zebra"));
    printf("Fetching 'j': %s\n", shash_table_get(ht, "j"));
    printf("Fetching 'b': %s\n", shash_table_get(ht, "b"));
    printf("Fetching 'm': %s\n", shash_table_get(ht, "m"));
    printf("Fetching 'queen': %s\n", shash_table_get(ht, "queen"));
    printf("Fetching 'kamau': %s\n", shash_table_get(ht, "kamau"));
        shash_table_delete(ht);
    return (EXIT_SUCCESS);
}

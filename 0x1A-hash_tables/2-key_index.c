#include "hash_table.h"

/**
 * key_index - generates index for the hash table
 * @key: string in which index is generated from
 * @size: size of the hash table
 * Return: generated index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int num, index;

	num = hash_djb2(key);
	index = num % size;

	return (index);
}

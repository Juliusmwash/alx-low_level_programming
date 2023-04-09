#include "hash_tables.h"

/**
 * key_index - generates index for the hash table
 * @key: string in which index is generated from
 * @size: size of the hash table
 * Return: generated index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}

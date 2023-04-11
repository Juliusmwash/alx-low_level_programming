#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to created hash table of null creation fails
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

/**
 * set_helper - deals with the sorted linked list
 * @ht: the hash table
 * @node: newly created node
 * Return: nothing
 */

void set_helper(shash_table_t **ht, shash_node_t **node)
{
	int check, hd = 0;

	shash_node_t *tmp, *temp;

	tmp = (*ht)->shead;
	while (tmp != NULL)
	{
		check = strcmp((*node)->key, tmp->key);
		if (check < 0)
		{
			temp = tmp->sprev;
			(*node)->snext = tmp;
			(*node)->sprev = temp;
			tmp->sprev = *node;
			if (temp != NULL)
				temp->snext = *node;
			if (!hd)
				(*ht)->shead = (*node);
			break;
		}
		tmp = tmp->snext;
		hd = 1;
	}
	if (tmp == NULL)
	{
		tmp = (*ht)->shead;
		while (tmp->snext != NULL)
			tmp = tmp->snext;
		(*node)->sprev = tmp;
		(*node)->snext = NULL;
		tmp->snext = *node;
	}
	tmp = (*ht)->shead;
	while (tmp->snext != NULL)
		tmp = tmp->snext;
	(*ht)->stail = tmp;
}


/**
 * partial_free - frees the newly created node when
 * the new key matches with the
 * one in the hash table.
 * @ht_node: node from the hash table
 * @new_node: newly created node which has not been added to the hash table
 * Return: 1 or 0
 */

int partial_free(shash_node_t **ht_node, shash_node_t **new_node)
{
	shash_node_t *tmp;

	tmp = (*ht_node);
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, (*new_node)->key) == 0)
		{
			free(tmp->value);
			tmp->value = (*new_node)->value;
			free((*new_node)->key);
			free((*new_node));
			*new_node = NULL;
			return (0);
		}
		tmp = tmp->next;
	}
	return (1);
}


/**
 * shash_table_set - adds data to the hash table, key and value.
 * @ht: the hash table
 * @key: the key, string
 * @value: the value, string
 * Return: 1 or 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node;

	if (ht == NULL)
		return (0);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	index = key_index((const unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		if (partial_free(&ht->array[index], &new_node))
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
	}
	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
	}
	else
	{
		if (new_node != NULL)
			set_helper(&ht, &new_node);
	}
	return (1);
}


/**
 * shash_table_get - gets the value associated with the key
 * @ht: the hash table
 * @key: the key, string
 * Return: the value
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;

	shash_node_t *tmp;

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


/**
 * shash_table_print - prints the sorted hash table
 * @ht: the hash table
 * Return: nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	int check = 0;
	shash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (!check)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			check = 1;
		}
		else
			printf(", '%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - prints the sorted hash table in reverse
 * @ht: the hash table
 * Return: nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	int check = 0;
	shash_node_t *tmp;

	if (ht == NULL)
		return;
	tmp = ht->stail;
	printf("{");
	while (tmp != NULL)
	{
		if (!check)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			check = 1;
		}
		else
			printf(", '%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - frees all the allocated memory used by the hash table
 * @ht: the hash table
 * Return: nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *temp;
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


/**
 * shash_table_print2 - prints the non-sorted hash table
 * @ht: the hash table
 * Return: nothing
 */

void shash_table_print2(const shash_table_t *ht)
{
	shash_node_t *temp;
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

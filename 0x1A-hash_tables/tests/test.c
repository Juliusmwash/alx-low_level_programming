#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MOD_NUMBER 10
#define HASH_TABLE_SIZE 10
#define MAX_LIMIT 50

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

void testing_pack(hash_table_t *hash_table);

/**
 * create_node - creates and initializes node with a key and value
 * @key: key to add to the hash table
 * @value: value to add to the hash table
 * Return: newly created node
 */

hash_node_t *create_node()
{
	hash_node_t *new_node;

	new_node =  malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return NULL;
	return new_node;
}

/**
 * remove_newline_character - removes '\n'
 * @key: string to remove '\n' character
 * Return: nothing;
 */

void remove_newline_character(char *key)
{
	int i = 0;

	while (key[i] != '\n')
		i++;
	key[i] = '\0';
}


/**
 * hash_func - generates index for the hash table array
 * @key: string used by hash function to generate index
 * Return: generated index
 */

unsigned int hash_func(char *key)
{
	unsigned int index, num, i;
	char *extra_str;

	extra_str = "juliusmwassirungu";
	i = 0;
	num = 0;
	while (key[i] != '\0' && key[i] != '\n')
	{
		num += key[i];
		i++;
	}
	i = 0;
	while (extra_str[i] != '\0' && extra_str[i] != '\n')
	{
		num += extra_str[i];
		i++;
	}
	num = num % MOD_NUMBER;
	return (num);
}

/**
 * create_hash_table - creates a hash table
 * @value: number to be used as the size of the hash table
 * Return: hash_table
 */

hash_table_t *create_hash_table(unsigned long int value)
{
	hash_table_t *hash_table;
	unsigned long int i = 0;

	hash_table = malloc(sizeof(hash_table_t));
	hash_table->size = value;
	hash_table->array = malloc(sizeof(hash_node_t *) *value);
	for (; i < value; i++)
	{
		hash_table->array[i] = malloc(sizeof(hash_node_t));
		hash_table->array[i]->key = NULL;
		hash_table->array[i]->value = NULL;
		hash_table->array[i]->next = NULL;
        }
	return (hash_table);
}

/**
 * add_data_mode - adds keys and values to hash table
 * @key: key
 * @value: value
 * Return: hash table with all the data
 */

hash_table_t *insert_mode(hash_table_t *hash_table)
{
	hash_node_t *new_node;
	unsigned long int index, end;
	char key[MAX_LIMIT], value[MAX_LIMIT];
	int c;

	printf("Enter key: ");
	fgets(key, MAX_LIMIT, stdin);

	/* remove newline character */
	remove_newline_character(key);

	printf("Enter value: ");
	scanf("%[^\n]s", value);

	/* generate index */
	index = hash_func(key);

	/* create new node */
	new_node = create_node();

	if (hash_table->array[index]->key == NULL)
	{
		hash_table->array[index]->key = strdup(key);
		hash_table->array[index]->value = strdup(value);
		hash_table->array[index]->next = NULL;
	}
	else
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = hash_table->array[index];
		hash_table->array[index] = new_node;
	}
	while ( (c = getchar()) != '\n' && c != EOF ) { }

	return (hash_table);
}


/**
 * print_data - prints keys and values in the hash table
 * @hash_table: struct containing all the keys and values
 * Return: nothing
 */

void print_mode(hash_table_t *hash_table)
{
	hash_table_t *tmp;
	hash_node_t *temp;
	unsigned long int i = 0;

	tmp = hash_table;
	while (i < HASH_TABLE_SIZE)
	{
		printf("-----------%lu----------\n", i);
		if (tmp->array[i]->key != NULL)
		{
			printf("key: %s\nvalue: %s\n", tmp->array[i]->key, tmp->array[i]->value);

			temp = tmp->array[i]->next;
			while (temp != NULL)
			{
				printf("key: %s\nvalue: %s\n", temp->key, temp->value);
				temp = temp->next;
			}
		}
		i++;
	}

}

/**
 * search_hash_table - searches for the key and prints the key and the value if it's found
 * @key: key
 * Return: nothing
 */

void search_mode(hash_table_t *hash_table)
{
	char key[MAX_LIMIT];
	unsigned long int index;
	hash_node_t *tmp;

	printf("Enter key to search for: ");
	fgets(key, MAX_LIMIT, stdin);
	remove_newline_character(key);
	index = hash_func(key);

	if (hash_table->array[index]->key != NULL)
	{
	if (strcmp(key, hash_table->array[index]->key) == 0)
	{
		printf("----------Found key at index: %lu\n", index);
		printf("----------key: %s\n", hash_table->array[index]->key);
		printf("----------value: %s\n", hash_table->array[index]->value);
		return;
	}
	else
	{
		tmp = hash_table->array[index]->next;
		while (tmp != NULL)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				printf("----------Found key at index: %lu\n", index);
				printf("----------key: %s\n", tmp->key);
				printf("----------value: %s\n", tmp->value);
				return;
			}
			tmp = tmp->next;
		}
	}
	}
	printf("----------key '%s' doesn't exist\n", key);
}

/**
 * delete_key - deletes key and value from the hash table
 * @hash_table: hash table
 * Return: Nothing
 */

void delete_mode(hash_table_t *hash_table)
{
	char key[MAX_LIMIT];
	unsigned long int index;
	hash_node_t *tmp, *temp;

	printf("Enter key to delete: ");
	fgets(key, MAX_LIMIT, stdin);
	remove_newline_character(key);
	index = hash_func(key);

	if (hash_table->array[index]->key != NULL)
	{
		if (strcmp(key, hash_table->array[index]->key) == 0)
		{
		if (hash_table->array[index]->next != NULL)
		{
		tmp = hash_table->array[index]->next;
		free(hash_table->array[index]->key);
		free(hash_table->array[index]->value);
		hash_table->array[index]->key = tmp->key;
		hash_table->array[index]->value = tmp->value;
		hash_table->array[index]->next = tmp->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
		}
		else
		{
			hash_table->array[index]->key = NULL;
			hash_table->array[index]->value = NULL;
			hash_table->array[index]->next = NULL;
		}
		}
		else
		{
		tmp = hash_table->array[index]->next;
		while (tmp != NULL)
		{
		if (strcmp(key, tmp->key) == 0)
		{
			temp = hash_table->array[index];
			while(temp != NULL)
			{
			if (strcmp(temp->next->key, key) == 0)
			{
				temp->next = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				break;
			}
			temp = temp->next;
			}
		}
			tmp = tmp->next;
			}
		}
	}
}

/**
 * free_memory - free all memory allocated for the hash table
 * @hash_table: hash table
 * Return: nothing
 */

unsigned long int free_memory(hash_table_t *hash_table)
{
	unsigned long int i = 0, nodes = 0;
	hash_node_t *tmp, *temp;

	while (i < HASH_TABLE_SIZE)
	{
		temp = hash_table->array[i]->next;
		while (temp != NULL)
		{
			tmp = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = tmp;
			nodes++;
		}
		free(hash_table->array[i]);
		nodes++;
		i++;
	}
	free(hash_table->array);
	free(hash_table);
	printf("---------array cleaned\n");
	printf("---------hash table freed\n");

	return (nodes);
}

/**
 * testing_pack - contain keys and values
 * @hash_table: hash table
 * Return: nothing
 */

void testing_pack(hash_table_t *hash_table)
{
	hash_node_t *node, *node2, *node3;

	printf("-----testing pack enabled-----\n\n");
	node = create_node();
	node2 = create_node();
	node->key = strdup("wheat");
	node->value = strdup("2");
	node->next = node2;
	node2->key = strdup("honest");
	node2->value = strdup("3");
	node2->next = NULL;
	hash_table->array[6]->key = strdup("handsome");
	hash_table->array[6]->value = strdup("1");
	hash_table->array[6]->next = node;
}

int main()
{
	hash_table_t *hash_table;
	unsigned long int value = HASH_TABLE_SIZE, nde;
	int cntrl, c;

	hash_table = create_hash_table(HASH_TABLE_SIZE);
	printf("HASH TABLE CREATED\n");
	testing_pack(hash_table);
	printf("----------insert_mode----------(1)\n");
	printf("----------delete_mode----------(2)\n");
	printf("----------search_mode----------(3)\n");
	printf("----------print_mode----------(4)\n");
	printf("----------exit----------(0)\n");
	while (1)
	{
		printf("\nEnter mode: ");
		scanf("%d", &cntrl);
		while ( (c = getchar()) != '\n' && c != EOF ) { }
		switch (cntrl)
		{
			case 1:
				insert_mode(hash_table);
				break;
			case 2:
				delete_mode(hash_table);
				break;
			case 3:
				search_mode(hash_table);
				break;
			case 4:
				print_mode(hash_table);
				break;
			case 0:
				nde = free_memory(hash_table);
				printf("nodes deleted: %lu\n", nde);
				exit (0);
			default:
				printf("invalid entry, try again\n");
		}
	}

	return (0);
}
/*
int main()
{
	int num = 10;

	hash_node_t *nodes = malloc(sizeof(hash_node_t) * num);
	hash_table_t hash_table;
	hash_table.array = malloc(sizeof(hash_node_t) * 10);
	for (int i = 0; i < 10; i++)
	{
		hash_table.array[i] = malloc(sizeof(hash_node_t));
		hash_table.array[i]->key = NULL;
		hash_table.array[i]->value = NULL;
		hash_table.array[i]->next = NULL;
	}
	hash_table.array[3]->key = "Julius";
	hash_table.array[3]->value = "1";
	hash_table.array[4]->key = "grace";
	hash_table.array[4]->value = "2";


	hash_node_t *new = malloc(sizeof(hash_node_t));
	new->key = "Mary";
	new->value = "3";
	new->next = NULL;

	hash_table.array[3]->next = new;

	for (int i = 0; i < 10; i++)
	{
		if (hash_table.array[i]->key != NULL)
			printf("key: %s\n", hash_table.array[i]->key);
		if (hash_table.array[i]->value != NULL)
		{
			printf("Value: %s\n", hash_table.array[i]->value);
			printf("\n");
		}
		if (hash_table.array[i]->next != NULL)
		{
			printf("key: %s\n", hash_table.array[i]->next->key);
			printf("Value: %s\n", hash_table.array[i]->next->value);
			printf("\n");
		}
	}
	//hash_table.size = 10;
	hash_node_t *nodes2 = malloc(sizeof(hash_node_t) * hash_table.size);
	hash_table.array = &nodes2;
	for (int i = 0; i < 10; i++)
		(*hash_table.array)[i].next = NULL;
	hash_node_t *temp = malloc(sizeof(hash_node_t));
	temp->key = "none";
	temp->value = "none";
	temp->next = NULL;
	hash_node_t temp;

	(*hash_table.array)[5].key = "Mary";
	(*hash_table.array)[5].value = "Mary";
	(*hash_table.array)[5].next = &temp;
	printf("%s\n", (*hash_table.array)[5].key);
	if ((*hash_table.array)[2].next == NULL)
		printf("array[2].next is null\n");
	if ((*hash_table.array)[5].next == NULL)
		printf("array[5] is NULL\n");
	printf("address: %p\n", &temp);
	char *me;
	char s = 's';
	me = &s;
	printf("address for me: %p\n", me);


	return 0;
}*/

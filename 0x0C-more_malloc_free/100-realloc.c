#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: - previous allocated memory or NULL
 * @old_size: - memory previously allocated by malloc
 * @new_size: - new memory to be allocated
 *
 * Return: pointer to new memory allocated by _realloc
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		void *arr = malloc(old_size + new_size);

		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	if (new_size > old_size)
	{
		void *arr = malloc(new_size);

		if (arr == NULL)
			return (ptr);
		free(ptr);
		return (arr);
	}
	return (NULL);
}

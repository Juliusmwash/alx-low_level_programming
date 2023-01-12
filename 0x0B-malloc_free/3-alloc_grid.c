#include "main.h"

/**
 * alloc_grid - returns a pointer to 2d array
 * @width: row of the array
 * @height: column of the array
 *
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **arr = NULL;
	int i, j;

	arr = malloc(sizeof(int *) * width);
	if (arr == NULL)
	{
		return (NULL);
	}
	if (!(arr))
	{
		free(arr);
		arr = NULL;
	}
	if (width <= 0 || height <= 0)
		return (NULL);
	if (arr)
	{
	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(sizeof(int) * height);
		if (arr[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			*(*(arr + i) + j) = 0;
	}
	return (arr);
}

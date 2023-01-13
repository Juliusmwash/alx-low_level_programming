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

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
			{
				free(arr[j]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(*(arr + i) + j) = 0;
	return (arr);
}

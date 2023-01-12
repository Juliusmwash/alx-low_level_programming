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
	int **arr;
	int i, j, n;

	arr = (int **)malloc(sizeof(int *) * width);
	if (arr == NULL || width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * height);
		if (arr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			*(*(arr + i) + j) = 0;
	return (arr);
}

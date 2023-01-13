#include "main.h"

/**
 * free_grid - frees all memory pointed to by grid pointer
 * @grid: pointer to memory addresses
 * @height: rows of the dynamic 2d arrays
 *
 * return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

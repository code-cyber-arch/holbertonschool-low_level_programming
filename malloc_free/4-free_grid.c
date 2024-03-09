#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array of integers.
 * @grid: The 2D array to be freed.
 * @height: The height of the 2D array.
 *
 * Description: Frees memory allocated for a 2D array of integers.
 *              Sets each pointer in grid to NULL after freeing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}

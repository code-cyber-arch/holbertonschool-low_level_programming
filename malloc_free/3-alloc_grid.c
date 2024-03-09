#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: Width of the 2D array.
 * @height: Height of the 2D array.
 *
 * Return: Pointer to the allocated 2D array, or NULL on failure.
 *
 * Description: Allocates memory for a 2D array of integers with
 * the specified width and height.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}

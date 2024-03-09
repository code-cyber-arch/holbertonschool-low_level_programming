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

	array = malloc(height * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
			return (NULL);
	}
	return (array);
}

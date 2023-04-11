#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * To a 2 dimensional array of integers
 * @height: height of grid
 * @width: width of grid
 * Return: a pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int **grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (int i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (int j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

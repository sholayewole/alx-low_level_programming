#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * that was created in task 3 by alloc_grid
 * @height: height of grid
 * @grid: pointer
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

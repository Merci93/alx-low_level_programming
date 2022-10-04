#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2-D grid
 * @grid: grid created previously
 * @height: height of the grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

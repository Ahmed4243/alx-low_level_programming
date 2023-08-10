#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid 
 * @grid: grid
 * @height: height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int count;

	if (grid == NULL || grid == 0)
		return;
	for (count = 0; count < height;  count++)
		free(grid[count]);
	free(grid);
}

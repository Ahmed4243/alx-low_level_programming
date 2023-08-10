#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Array
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(width * sizeof(int));
		if (arr[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(arr[y]);
			free(arr);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}
	return (arr);
}
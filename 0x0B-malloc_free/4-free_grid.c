#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a pointer
 * @grid: the array to free
 * @height: height of array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}

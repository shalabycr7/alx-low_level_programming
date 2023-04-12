#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - release allocated 2 dimensional array.
 * @grid: 2D integers array.
 * @height: height of the array.
 * Return: no value
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}

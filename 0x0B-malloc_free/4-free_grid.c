#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Descrition: frees memory of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int j;/*declaring variable*/

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}

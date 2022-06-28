#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function to free 2 dimensional grid
 * @grid: the vertical length of array
 * @height: the horizontal lenght of array
 *
 * Return: to free_grid
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(*(grid + m));
	}
	free(grid);
}

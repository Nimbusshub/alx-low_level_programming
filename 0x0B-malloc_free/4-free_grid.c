#include <stdlib.h>
#include "main.h"
/**
 * free_grid - this function will create and initialize an array
 * @grid: the grid that will be fred
 * @height: the height of the grid
 * Return: pointer (success) or return NULL if size is 0
 * or the memory allocation fails
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

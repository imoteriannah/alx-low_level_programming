#include <stdlib.h>

/**
 * free_grid - function to free a 2d alloc_grid
 * @grid: pointer to the 2D array alloc_grid
 * @height: array height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}

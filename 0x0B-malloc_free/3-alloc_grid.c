#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that prints a pointer to a grid
 * @width: width of the grid of numbers
 * @height: height of the grid of numbers
 * Return: pointer to the grid
 */
int **alloc_grid(int width, int height)
{
int **mem, r, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	mem = malloc(sizeof(int *) * height);
	if (mem == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < height; r++)
	{
		mem[r] = malloc(sizeof(int) * width);

		if (mem[r] == NULL)
		{
			for (; r >= 0; r--)
			{
				free(mem[r]);
			}
			free(mem);
			return (NULL);
		}

		for (c = 0; c <= width; c++)
		{
			mem[r][c] = 0;
		}
	}
	return (mem);

}

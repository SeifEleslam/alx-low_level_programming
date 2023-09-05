#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - duplicate string and return duplicat
 * @width: int
 * @height: int
 * Return: char*
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, l;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(grid[l]);
			free(grid);
			return (NULL);
		}
		for (l = 0; l < width; l++)
			grid[i][l] = 0;
	}
	return (grid);
}


#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int h, w, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		grid[h] = (int *)malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (i = 0; i < h; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}

	return (grid);

}

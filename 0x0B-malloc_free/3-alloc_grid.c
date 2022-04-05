#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers
 * Each element should be initialized to 0
 * @width: Width of grid, aka # of columns
 * @height: Height of grid, aka # of rows
 *
 * Return: Pointers to 2D array, NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int l, k;

	l = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (l < height)
	{
		grid[l] = malloc(width * sizeof(**grid));
		if grid[l] == NULL)
		{
			l--;
			while (l >= 0)
			{
				free(grid[l]);
				l--;
			}
			free(grid);
			return (NULL);
		}
		k = 0;
		while (k < width)
		{
			grid[l][k] = 0;
			k++;
		}
		l++;
	}
	l = 0;
	return (grid);
}

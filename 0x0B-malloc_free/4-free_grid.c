#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: The 2D array to free memory from
 * @height: The height of the 2D array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int l;

	l = 0;
	while (l < height)
	{
		free(grid[l]);
		l++;
	}
	free(grid);
}

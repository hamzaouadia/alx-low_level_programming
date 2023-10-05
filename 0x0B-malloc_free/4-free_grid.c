#include "main.h"

/**
 *	free_grid - function that frees a 2 dimensional grid previously
 *		created by your alloc_grid function.
 *	@grid: 2 dimensional array
 *	@height: intiger.
 *	Return: void.
*/

void free_grid(int **grid, int height)
{
	for (size_t i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

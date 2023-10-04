#include "main.h"
/**
* free_grid -  a function that frees a 2 dimensional grid
*
* @grid: 2D array
* @height: the height of the array
*
* Return: returns nothing
*
*/
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
		free(grid[n]);
	free(grid);
}

#include "main.h"
/**
* alloc_grid - a function that returns a pointer to a
* 2 dimensional array of integers.
*
* @width: the width of the array
* @height: the height of the array
*
* Return: returns a pointer to a 2 dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
	int **ptr;
	int n, m;

	if (width <= 0 || height <= 0)
		return (0);
	ptr = malloc(height * sizeof(*ptr));
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}
	for (n = 0; n < height; ++n)
	{
		ptr[n] = malloc(width * sizeof(**ptr));
		if (ptr[n] == NULL)
		{
			for (n--; n >= 0; n--)
				free(ptr[n]);
			free(ptr);
			return (0);
		}
		for (m = 0; m < width; m++)
			ptr[n][m] = 0;
	}
	return (ptr);
}

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

	if (width == 0 || height == 0)
		return (0);
	ptr = calloc((width * height), sizeof(int));
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}
	return (ptr);
}

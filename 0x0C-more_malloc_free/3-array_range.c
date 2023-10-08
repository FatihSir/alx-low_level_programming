#include "main.h"
/**
* array_range - a function that creates an array of integers
*
* @min: the min number in the array
* @max: the max number in the array
*
* Return: returns a pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *ptr;
	int size = 0;
	int i, j;

	if (min  > max)
		return (0);
	for (i = min; i <= max; ++i)
		size = size + 1;
	ptr = malloc(size);
	if (ptr == NULL)
		return (0);
	for (i = min, j = 0; i <= max; ++i, ++j)
		ptr[j] = i;
	return (ptr);
}

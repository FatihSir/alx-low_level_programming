#include "function_pointers.h"
/**
* int_index - a function that searches for an integer
*
* @array: pointer to array
* @size: the size of the array
* @cmp: function pointer
*
* Return: returns the index of the first element
*
*
*
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (m = 0; m < size; m++)
		{
			if (cmp(array[m]))
			{
				return (m);
			}
		}
	}
	return (-1);
}

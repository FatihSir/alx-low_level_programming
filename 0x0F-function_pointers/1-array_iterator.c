#include "function_pointers.h"
/**
* array_iterator - a function that executes a function given as
* a parameter on each element of an array.
*
* @array: pointer to array
* @size: the size of the array
* @action: a pointer to the function
*
* Return: returns nothing
*
*
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array && action)
	{
		for (m = 0; m < size; m++)
		{
			action(array[m]);
		}
	}
}

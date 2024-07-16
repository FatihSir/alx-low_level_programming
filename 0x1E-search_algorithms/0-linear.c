#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 *
 * Return: returns the index of the searched value ,
 * or -1 if the array is null or the value does not exist
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
	}
	return (-1);
}

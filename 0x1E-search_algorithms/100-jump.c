#include "search_algos.h"
#include <math.h>
#include <stdio.h>
/**
 * jump_search - a function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: returns the index of the value if found,
 * if value is not present in array or if array is NULL, returns -1
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, current, jumps, i;

	if (array == NULL || size == 0)
		return (-1);
	jumps = sqrt(size);
	for (current = 0; current < size && array[current] < value; current += jumps)
	{
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);
		prev = current;
	}
	if (current >= size || array[current] >= value)
		printf("Value found between indexes [%lu] and [%lu]\n", prev, current);
	for (i = prev; i < size && i <= current; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

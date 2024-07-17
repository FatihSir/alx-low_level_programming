#include "search_algos.h"
#include <math.h>
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
	size_t prev, next, jumps, i;

	if (array == NULL || size <= 0)
		return (-1);

	jumps = sqrt(size);

	for (prev = 0; prev <= size; prev = prev + jumps)
	{
		next = prev + jumps;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] <= value && (array[next] >= value || next >= size))
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, next);
			for (i = prev; i <= next; ++i)
			{
				if (i >= size)
					return (-1);
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
	}
	return (-1);
}

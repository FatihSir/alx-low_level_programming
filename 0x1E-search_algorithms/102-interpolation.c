#include "search_algos.h"
/**
 * helper_interpolation_search - recursively searches for a
 * value in a sorted array of integers using the Interpolation
 * search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @low: starting index of the subarray to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the searched element,
 * or -1 if value is not present in array or if array is NULL
 */
int helper_interpolation_search(int *array, size_t low, size_t size, int value)
{
	size_t high, pos;

	if (low > size)
		return (-1);
	high = size - 1;
	pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
	if (pos > size)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	else if (array[pos] > value)
		return (helper_interpolation_search(array, low, pos, value));
	else if (array[pos] < value)
		return (helper_interpolation_search(array, pos + 1, size, value));
	return (-1);
}
/**
 * interpolation_search - a function that searches for a value
 * in a sorted array of integers using the Interpolation
 * search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: returns the index of the searched element,
 * if value is not present in array or if array is NULL, return -1
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;

	if (array == NULL || size == 0)
		return (-1);
	return (helper_interpolation_search(array, low, size, value));
}

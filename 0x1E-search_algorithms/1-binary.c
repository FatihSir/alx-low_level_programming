#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - a function to print the content of an array
 *
 * @array: a pointer to the array to be printed
 * @low: the index of the first element
 * @high: the size of the array
 *
 * Return: returns nothing
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low ; i <= high; ++i)
	{
		if (i >= high)
		{
			printf("%d\n", array[i]);
			return;
		}
		printf("%d, ", array[i]);
	}
}

/**
 * helper_binary_search - recursive helper function for binary search
 *
 * @array: a pointer to the first element of the array to search in
 * @low: the start index of the subarray
 * @high: the end index of the subarray
 * @value: the value to search for
 *
 * Return: returns the index of the searched value,
 * or -1 if the value does not exist
 */
int helper_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t m;

	if (low > high)
		return (-1);
	print_array(array, low, high);
	m = (low + high) / 2;
	if (array[m] == value)
		return (m);
	else if (array[m] > value)
		return (helper_binary_search(array, low, m - 1, value));
	else
		return (helper_binary_search(array, m + 1, high, value));
}

/**
 * binary_search - a function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: returns the index of the searched value,
 * or -1 if the array is null or the value does not exist
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size <= 0)
		return (-1);

	return (helper_binary_search(array, 0, size - 1, value));
}

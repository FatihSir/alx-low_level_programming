#include "search_algos.h"
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
 * helper_advanced_binary - recursive helper function
 * for advanced binary search
 *
 * @array: a pointer to the first element of the array to search in
 * @low: the start index of the subarray
 * @high: the end index of the subarray
 * @value: the value to search for
 *
 * Return: returns the index of the searched value,
 * or -1 if the value does not exist
 */
int helper_advanced_binary(int *array, size_t low, size_t high, int value)
{
	size_t m;

	if (low > high)
		return (-1);
	print_array(array, low, high);
	m = (low + high) / 2;
	if (array[m] == value)
	{
		if (m == low || array[m - 1] != value)
			return (m);
		return (helper_advanced_binary(array, low, m, value));
	}
	else if (array[m] >= value)
		return (helper_advanced_binary(array, low, m, value));
	else
		return (helper_advanced_binary(array, m + 1, high, value));
}
/**
 * advanced_binary -  a function that searches for a value
 * in a sorted array of integers.
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: returns the index of the searched value,
 * or -1 if the array is null or the value does not exist
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (helper_advanced_binary(array, 0, size - 1, value));
}

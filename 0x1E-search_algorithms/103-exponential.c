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
 * exp_binary_search - recursive helper function for binary search
 *
 * @array: a pointer to the first element of the array to search in
 * @low: the start index of the subarray
 * @high: the end index of the subarray
 * @value: the value to search for
 *
 * Return: returns the index of the searched value,
 * or -1 if the value does not exist
 */
int exp_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t m;

	if (low > high)
		return (-1);
	print_array(array, low, high);
	m = (low + high) / 2;
	if (array[m] == value)
		return (m);
	else if (array[m] > value)
		return (exp_binary_search(array, low, m - 1, value));
	else
		return (exp_binary_search(array, m + 1, high, value));
}
/**
 * exponential_search - a function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Returns: index of the searched element,
 * or -1 if value is not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (value);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	return (exp_binary_search(array, i / 2, min(size - 1, i), value));
}

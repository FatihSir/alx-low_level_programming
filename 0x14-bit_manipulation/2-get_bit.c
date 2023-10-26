#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: unsigned long int input.
 * @index: is the index, starting from 0 of the bit you want to get.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = sizeof(unsigned long int) * 8;
	unsigned int i;

	if (index > m)
		return (-1);
	for (i = 0; i <= m - 1; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}
	return (-1);
}

#include "main.h"
/**
* clear_bit - sets the value of a bit to 0 at a given index.
*
* @n: pointer of an unsigned long int number.
* @index: is the index, starting from 0 of the bit you want to set
*
* Return: returns 1 if it worked, -1 if it didn't.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = sizeof(unsigned int) * 8;

	if (index > i - 1)
		return (-1);
	i = 1 << index;
	if (*n & i)
		*n ^= i;
	return (1);
}

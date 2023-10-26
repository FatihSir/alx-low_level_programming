#include "main.h"
/**
* set_bit - sets the value of a bit to 1 at a given index.
*
* @n: pointer of an unsigned long int number.
* @index: is the index, starting from 0 of the bit you want to set
*
* Return: returns 1 if it worked, -1 if it didn't.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = sizeof(unsigned int) * 8;

	if (index > i - 1 )
		return (-1);
	i = 1 << index;
	*n = (*n | i);
	return (1);
}

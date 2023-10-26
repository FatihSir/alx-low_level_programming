#include "main.h"
/**
* flip_bits - returns the number of bits you would need to flip to
* get from one number to another
*
* @n: the first number.
* @m: the second number.
*
* Return: returns the number of bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}
	return (i);
}

#include "main.h"
/**
* _powe - a function that calculates base^power
*
* @base: the base number
* @power: the power
*
* Return: returns base^power
*
*/
unsigned int _pow(int base, int power)
{
	unsigned int result = 1;
	int i;

	if (power == 0)
		return (1);
	if (base == 0)
		return (0);
	if (base != 0 && power != 0)
	{
		for (i = 0; i < power; ++i)
			result = result * base;
	}
	return (result);
}

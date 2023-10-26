#include "main.h"
#include <math.h>
/**
* binary_to_uint - a function that converts a binary number
* to an unsigned int
*
* @b: a pointer to the number to be converted
*
* Return: returns the decimal representation
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result * 2 + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (result);
}

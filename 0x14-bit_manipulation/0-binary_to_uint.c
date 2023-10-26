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
	char *ptr;
	int i, j, len, ops = 0;
	unsigned int b_toi = 0;

	for (len = 0;b[len] != '\0'; ++len);
	if (b == NULL)
		return (0);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	for (i = 0, j = len - 1; i < len && j >= 0; ++i, --j)
	{
		if (b[j] == '0' || b[j] == '1')
		{
			ptr[i] = b[j] - '0';
		}
		else
		{
			free(ptr);
			return (0);
		}
	}
	for (i = 0; i < len; ++i)
	{
		ops = (int)_pow(2, i) * ptr[i];
		b_toi = b_toi + ops;
	}
	free(ptr);
	return (b_toi);
}

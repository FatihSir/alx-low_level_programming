#include "main.h"
/**
* _memset - function fills the memory with a constant byte
*
* @s: pointer to the area of memory to be filled
* @b: the constant that will be used to fill the memory
* @n: the number of bytes to be filled
*
* Return: always returns pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = n; j > 0; j++, n--)
	{
		s[j] = b;
	}
	return (s);
}

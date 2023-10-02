#include "main.h"
/**
* _memcpy - function copies an area of a momery
*
* @src: the memory area to be copied from
* @dest: the memory area to be copied to
* @n: the number of bytes to be copied
*
* Return: always returs te pointer dest
*
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n  > 0; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}

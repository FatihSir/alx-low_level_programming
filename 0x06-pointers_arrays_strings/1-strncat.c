#include "main.h"

/**
* _strncat - function concatenates two strings but specifies
* the maximum number of characters
*
* @dest: the first string
* @src: the second string
* @n: the maximum number of characters
*
* Return: returns pointer points to the concatenated strings
*
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

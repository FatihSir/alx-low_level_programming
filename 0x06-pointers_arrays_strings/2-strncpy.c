#include "main.h"

/**
* _strncpy - function copies strings from source to destination but specifies
* the maximum number of characters to be copied
*
* @dest: the first string
* @src: the second string
* @n: the maximum number of characters
*
* Return: returns pointer points to the strings after copied the source
*
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}
	for (j = 0; j < n && src[j] == '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (j < n)
		dest[i] = '\0';
	return (dest);
}

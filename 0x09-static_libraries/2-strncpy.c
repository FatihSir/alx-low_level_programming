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
	int j;


	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		++j;
	}
	return (dest);
}

#include "main.h"

/**
* _strcat - function concatenates two strings
*
* @dest: the first string
* @src: the second string
*
* Return: returns pointer points to the concatenated strings
*
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; *src[j] != '\0'; ++j)
	{
		*dest[i] = *src[j];
		++i;
	}
	_strcat = *src;
	return (_strcat);
}

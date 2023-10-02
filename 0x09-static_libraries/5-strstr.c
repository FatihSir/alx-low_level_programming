#include "main.h"
#include <stdio.h>
/**
* _strstr - a function that locates a substring.
*
* @needle: the string to be looked for
* @haystack: the string to be looked within
*
* Return: a pointer
*
*/
char *_strstr(char *haystack, char *needle)
{
	int m, n;

	for (m = 0; haystack[m] != '\0'; ++m)
	{
		for (n = 0; needle[n] != '\0'; ++n)
		{
			if (haystack[m + n] != needle[n])
			{
				break;
			}
		}
		if (!needle[n])
		{
			return (&haystack[m]);
		}
	}
	return (NULL);
}

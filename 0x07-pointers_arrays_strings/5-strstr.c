#include "main.h"
#include <stddef.h>
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
	int i, j;

	for (i = 0; haystack[i] != '\0'; ++i)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; ++j)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}

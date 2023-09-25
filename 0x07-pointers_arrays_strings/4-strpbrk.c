#include "main.h"
/**
* _strpbrk - a function that searches a string for any of a set of bytes.
*
* @s: the string to be looked for
* @accept: the string to be looked within
*
* Return: a pointer
*
*
*
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return ('\0');
}

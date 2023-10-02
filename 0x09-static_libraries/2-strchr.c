#include "main.h"
/**
* _strchr - function that locates a character in a string
*
* @c: The char to be located
* @s: The string to be looked in
*
* Return: always returns a pointer to the first occurrence
* of the character c
*
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

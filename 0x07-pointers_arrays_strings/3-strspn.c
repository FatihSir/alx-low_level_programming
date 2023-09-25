#include "main.h"
/**
*  _strspn - a function that gets the length of a prefix substring
*
* @s: The string to be scaned
* @accept: the string to be looked for
*
* Return: returns the length of the intial segment
*
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter;
	int i;
	int j;

	for (i = 0; accept[i] != '\0'; ++i)
		for (j = 0; s[j] != '\0'; ++j)
		{
			if ( accept[i] == s[j])
				counter +=;

		}
	return (counter);
}

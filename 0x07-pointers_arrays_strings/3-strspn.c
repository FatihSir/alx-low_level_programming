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

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				counter =  counter + 1;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;

		}
	}
	return (counter);
}

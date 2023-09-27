#include "main.h"

/**
* string_toupper - function converts lowercase
* characters in a string to uppercase
*
* @str: The string array
*
* Return: returns strings
*
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}
	return (str);
}

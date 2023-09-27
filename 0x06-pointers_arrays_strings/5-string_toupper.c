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
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

#include "main.h"
/**
* _strlen_recursion - a function that returns the length of a string
*
* @s: pointer to string
*
* Return: returns the length of the string pointed by *s
*/
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
	{
		return (length);
	}
	else
	{
		length = length + 1;
		_strlen_recursion(s + 1);
	}
	return (length);
}

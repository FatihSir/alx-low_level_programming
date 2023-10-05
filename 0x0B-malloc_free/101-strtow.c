#include "main.h"
/**
* strtow -  a function that splits a string into words
*
* @str: string to be splitted
*
* Return:  returns a pointer to an array of strings (words)
*/
char **strtow(char *str)
{
	char **ptr;

	if (str == NULL || *str == '\0')
		return (0);
	ptr = (char **)malloc((524 * sizeof(char *)) + 1);
	if (ptr == NULL)
		return (0);
	return (ptr);
}

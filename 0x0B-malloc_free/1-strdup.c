#include "main.h"
/**
* _strdup - a function that returns a pointer to a newly allocated space in
* memory, which contains a copy of the string given as a parameter.
*
* @str: string to be copied to the new allocated space
*
* Return: On success, the _strdup function returns a pointer to the
* duplicated string.It returns NULL if insufficient memory was available
*
*/
char *_strdup(char *str)
{
	char *ptr;
	int i, n = 0;

	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] == '\0'; ++i)
	{
		n = n + 1;
	}
	ptr = malloc(n * sizeof(*str) + 1);
	if (ptr == NULL)
		return (0);
	for (i = 0; i < n; ++i)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}

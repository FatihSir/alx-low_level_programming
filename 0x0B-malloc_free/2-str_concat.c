#include "main.h"
/**
* str_concat - a function that concatenates two strings.
*
* @s1: the first string
* @s2: the second string
*
*
* Return: returns a pointer concatenation of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	int size_1 = 0;
	int size_2 = 0;
	int i;
	int j;
	char *ptr;

	while (s1[size_1] != '\0')
	{
		size_1++;
	}
	while (s2[size_2] != '\0')
	{
		size_2++;
	}
	if (size_1 == 0)
		s1[0] = ' ';
	if (size_2 == 0)
		s2[0] = ' ';
	ptr = malloc(size_1 + size_2 + 1);
	if (ptr == 0)
		return (0);
	for (i = 0; i < size_1; ++i)
		ptr[i] = s1[i];
	for (j = size_1; j < size_2; ++j)
		ptr[j] = s2[j];
	ptr[size_2] = '\0';
	return (ptr);
}

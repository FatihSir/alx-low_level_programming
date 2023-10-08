#include "main.h"
/**
* conc_1 - a function that concatenates two strings
*
* @s1: the first string
* @s2: the second string
* @s1_length: the length of s1
* @s2_length: the length of s2
*
* Return: returns a pointer that points to a newly allocated space in memory
* which contains s1, followed by the first n bytes of s2, and null terminated
*
*/
char *conc_1(unsigned int s1_length, unsigned int s2_length
, char *s1, char *s2)
{
	int i, j;
	char *conc;

	conc = malloc((s1_length + s2_length + 1) * sizeof(char));
	if (conc == NULL)
	{
		return (0);
	}
	for (i = 0; i < s1_length; ++i)
	{
		conc[i] = s1[i];
	}
	for (j = 0; j < s2_length; ++j)
	{
		conc[i + j] = s2[j];
	}
	conc[i + j] = '\0';
	return (conc);
}
/**
* conc_2 - a function that concatenates two strings
*
* @s1: the first string
* @s2: the second string
* @s1_length: the length of s1
* @n: the length of s2 to be concatenated
*
* Return: returns a pointer that points to a newly allocated space in memory
* which contains s1, followed by the first n bytes of s2, and null terminated
*
*/
char *conc_2(unsigned int s1_length, unsigned int n, char *s1, char *s2)
{
	int i, j;
	char *conc;

	conc = malloc((s1_length + n + 1) * sizeof(char));
	if (conc == NULL)
	{
		return (0);
	}
	for (i = 0; i < s1_length; ++i)
	{
		conc[i] = s1[i];
	}
	for (j = 0; j < n; ++j)
	{
		conc[i + j] = s2[j];
	}
	conc[i + j] = '\0';
	return (conc);
}
/**
* string_nconcat - a function that concatenates two strings
*
* @s1: the first string
* @s2: the second string
* @n: the number of bytes of s2 to be concatenated
*
* Return: returns a pointer that points to a newly allocated space in memory
* which contains s1, followed by the first n bytes of s2, and null terminated
*
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length;
	unsigned int s2_length;
	char *conc;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_length = strlen(s1);
	s2_length = strlen(s2);

	if (n >= s2_length)
	{
		conc = conc_1(s1_length, s2_length, s1, s2);
		return (conc);
	}
	else if (s2[0] == '\0')
	{
		conc = malloc(sizeof(char) * (s1_length + 1));
		if (conc == NULL)
			return (0);
		for (i = 0; i < s1_length; ++i)
		{
			conc[i] = s1[i];
		}
		conc[s1_length] = '\0';
		return (conc);
	}
	conc = conc_2(s1_length, n, s1, s2);
	return (conc);
}

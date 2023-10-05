#include "main.h"
/**
* argstostr - a function that concatenates all the arguments of your program.
*
* @ac: counter
* @av: string
*
* Return: Returns a pointer to a new string, or NULL if it fails
*
*/
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;

	if (ac == 0 || av == NULL)
		return (0);
	if (ptr == NULL)
		return (0);
	ptr = (char *) malloc(ac * sizeof(char));
	for (i = 1; i < ac; ++i)
	{
		ptr[i - 1] = **(av + i);
	}
	return (ptr);
}

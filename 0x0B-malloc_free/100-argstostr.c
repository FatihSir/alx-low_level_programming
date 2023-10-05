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
	int j;
	int n = 0;
	int m = 0;

	if (ac == 0 || av == NULL)
		return (0);
	for (i = 0; i < ac; ++i)
	{
		n = n + strlen(av[i]) + 1;
	}

	ptr = (char *) malloc(n * sizeof(char) + 1);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j] != '\0'; ++j)
		{
			ptr[m] = av[i][j];
			m = m + 1;
		}
		ptr[m] = '\n';
		++m;
	}
	ptr[m] = '\0';
	return (ptr);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - a program that adds positive numbers.
*
* @argc: the count of the arguments
* @argv: pointer to array of strings
*
* Return: always returns 0
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int num;
	int j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; ++i)
		{
			for (j = 0; argv[i][j] != '\0'; ++j)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				else
					continue;
			}

			num = atoi(argv[i]);
			sum = sum + num;
		}
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
/**
* main -  a program that prints all arguments it receives
*
* @argc: the count of the arguments
* @argv: pointer to array of strings
*
* Return: always returns 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

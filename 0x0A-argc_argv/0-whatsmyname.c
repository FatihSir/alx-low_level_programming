#include <stdio.h>
/**
* main - a program that prints its name, followed by a new line
*
* @argc: the count of the arguments
* @argv: pointer to array of strings
*
* Return: always returns 0
*/
int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

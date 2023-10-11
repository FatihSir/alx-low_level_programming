#include <stdio.h>
#include <stdlib.h>
/**
* main - main function.
*
*
* @argc: count.
* @argv: values.
*
* Return: Always returns 0.
*/
int main(int argc, char *argv[])
{
	char *ops = (char *) main;
	int m, nb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nb = atoi(argv[1]);
	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (m = 0; m < nb; m++)
	{
		printf("%02x", ops[m] & 0xFF);
		if (m != nb - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}

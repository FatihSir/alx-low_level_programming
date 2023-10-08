#include "main.h"
/**
* _isdigit - a program that checks check if num1 and num2 are composed.
*
* @num_1: the first number
* @num_2: the second number
*
*/
void _isdigit(char *num_1, char *num_2)
{
	int i;

	for (i = 0; num_1[i] != '\0'; ++i)
	{
		if (!isdigit(num_1[i]))
		{
			printf("Error\n");
			exit(3);
		}
	}
	for (i = 0; num_2[i] != '\0'; ++i)
	{
		if (!isdigit(num_2[i]))
		{
			printf("Error\n");
			exit(3);
		}
	}
}
/**
* mul_1 - a program that multiplies two positive numbers
*
* @num_1: the first number
* @num_2: the second number
*
* Return: Return: returns a multiplication of two positive numbers.
*/
unsigned int mul_1(char *num_1, char *num_2)
{
	unsigned int a, b, multi;

	a = atoi(num_1);
	b = atoi(num_2);
	multi = a * b;
	return (multi);
}
/**
* mul - a program that multiplies two positive numbers.
*
* @argv: array of postive numbers
* @argc: conter
*
* Return: returns a multiplication of two positive numbers
*/
unsigned int mul(int argc, char *argv[])
{
	char *num_1;
	char *num_2;
	unsigned int multi;

	if (argc != 3)
	{
		printf("Error\n");
		exit(3);
	}

	num_1 = argv[1];
	num_2 = argv[2];
	_isdigit(num_1, num_2);
	multi = mul_1(num_1, num_2);
	printf("%u\n", multi);
	return (multi);
}

#include "main.h"
/**
* _isdigit - a program that checks check if num1 and num2 are composed.
*
* @num_1: the first number
* @num_2: the second number
*
* Return: return 0
*/
int _isdigit(char *num_1, char *num_2)
{
	int i;

	for (i = 0; num_1[i] != '\0'; ++i)
	{
		if (!isdigit(num_1[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; num_2[i] != '\0'; ++i)
	{
		if (!isdigit(num_2[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
/**
* mul_1 - a program that multiplies two positive numbers
*
* @num_1: the first number
* @num_2: the second number
*
* Return: Return: returns a multiplication of two positive numbers.
*/
int mul_1(char *num_1, char *num_2)
{
	int a, b, mul = 0;

	a = atoi(num_1);
	b = atoi(num_2);
	mul = a * b;
	return (mul);
}
/**
* main - a program that multiplies two positive numbers.
*
* @argv: array of postive numbers
* @argc: conter
*
* Return: returns a multiplication of two positive numbers
*/
int main(int argc, char *argv[])
{
	char *num_1;
	char *num_2;
	int mul;


	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = argv[1];
	num_2 = argv[2];
	_isdigit(num_1, num_2);
	mul = mul_1(num_1, num_2);
	printf("%d\n", mul);
	return (0);
}

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
* @mul: the result of the multi
*
* Return: Return: returns a multiplication of two positive numbers.
*/
void mul_1(char *num_1, char *num_2, mpz_t mul)
{
	mpz_t a, b;

	mpz_init(a);
	mpz_init(b);
	mpz_set_str(a, num_1, 10);
	mpz_set_str(b, num_2, 10);
	mpz_mul(mul, a, b);
	mpz_clear(a);
	mpz_clear(b);
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
	mpz_t mul;

	mpz_init(mul);

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = argv[1];
	num_2 = argv[2];
	_isdigit(num_1, num_2);
	mul_1(num_1, num_2, mul);
	gmp_printf("%Zd\n", mul);
	mpz_clear(mul);
	return (0);
}

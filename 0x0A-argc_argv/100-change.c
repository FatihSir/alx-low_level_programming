#include <stdio.h>
#include <stdlib.h>
/**
* sum_n - a program that prints the minimum number of coins to
* make change for an amount of money
*
* @a: the count of the arguments
*
* Return: always returns 0
*/
int sum_n(int *a)
{
	int i;
	int sum = 0;

	for (i = 0; i < 5; ++i)
	{
		sum = sum + *(a + i);
	}
	return (sum);
}

#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints the minimum number of coins to
* make change for an amount of money
*
* @argc: the count of the arguments
* @argv: pointer to array of strings
*
* Return: always returns 0
*/
int main(int argc, char *argv[])
{
	int n_coints[4] = {0};
	int num;
	int sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		return (printf("0"), 0);
	}
	if (num >= 25)
	{
		n_coints[0] = num / 25;
		num = num % 25;
	}
	else if (num >= 10 && num < 25)
	{
		n_coints[1] = num / 10;
		num = num % 10;
	}
	else if (num >= 5 && num < 10)
	{
		n_coints[2] = num / 5;
		num = num % 5;
	}
	else if (num >= 2 && num < 5)
	{
		n_coints[3] = num / 2;
		num = num % 2;
	}
	else if (num == 1)
	{
		n_coints[4] = 1;
	}
	else if (num == 0)
	{
		sum = sum_n(n_coints);
		return (sum);
	}
	sum = sum_n(n_coints);
	return (sum);
}

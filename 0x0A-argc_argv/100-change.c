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
		sum = sum + a[i];
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
	int coins[] = {25, 10, 5, 2, 1};
	int n_coints[5] = {0};
	int num;
	int sum = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; ++i)
	{
		n_coints[i] = num / coins[i];
		num = num % coins[i];
	}
	sum = sum_n(n_coints);
	return (0);
}

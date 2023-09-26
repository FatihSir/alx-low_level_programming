#include "main.h"
#include <stdio.h>
/**
* print_diagsums -  a function that prints the sum of the two diagonals
* of a square matrix of integers.
*
* @a: pointer the first element in the matrix
* @size: the size of the square matrix
*
* Return: always returns nothing*
*/
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int i;

	for (i = 0; i < size; ++i)
	{
		sum_1 = sum_1 + a[i * size + i];
	}

	printf("%d\n", sum_1);
}

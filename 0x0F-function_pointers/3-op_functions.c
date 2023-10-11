#include "3-calc.h"
/**
* op_add - adds two nums
*
*
* @a: the first numb
* @b: the second numb
*
* Return: returns  addition of two numbs.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subctracts two numbs.
*
* @a: the first numb.
* @b: the second numb.
*
* Return: returns the difference between two numbs.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies two numbs.
*
*
* @a: the first numb.
* @b: the second numb.
*
* Return: returns the result of a multiplication of two numbs.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides two numbs.
*
*
* @a: the first numb.
* @b: the second numb.
*
*
* Return: returns a result of divisionof two numbs.
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - determines the module of two numbs.
*
* @a: the first numb.
* @b: the second numb.
*
* Return: returns the remainder of the division.
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

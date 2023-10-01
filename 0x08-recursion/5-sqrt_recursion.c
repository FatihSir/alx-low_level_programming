#include "main.h"
/**
* checker - a function that returns the natural square root of a number
*
* @n: number to be squaredi root
* @a: integer to iterate util n
* Return: retuns the squared root of n
*/
int checker(int n, int a)
{
	if (a * a == n)
		return (a);
	else if (a == n || n < 0)
		return (-1);
	else
		return (checker(n, a + 1));
}
/**
* _sqrt_recursion - a function that returns the natural square root of a number
*
* @n: number to be squaredi root
*
* Return: retuns the squared root of n
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (checker(n, 1));
}

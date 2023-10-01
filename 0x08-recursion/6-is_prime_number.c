#include "main.h"
/**
* checker - a function that returns 1 if
* the input integer is a prime number, otherwise return 0
*
* @n: The integer number to be checked
* @a: variable to iterate to n
*
* Return: returns 1 if the number is a prime nuumber, otherwise returns 0.
*
*/
int checker(int n, int a)
{
	if (n == a)
		return (1);
	else if (n % a == 0)
		return (0);
	return (checker(n, a + 1));

}
/**
* is_prime_number - a function that returns 1 if
* the input integer is a prime number, otherwise return 0
*
* @n: The integer number to be checked
*
* Return: returns 1 if the number is a prime nuumber, otherwise returns 0.
*
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checker(n, 2));
}

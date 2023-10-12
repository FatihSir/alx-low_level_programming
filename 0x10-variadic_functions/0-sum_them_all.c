#include "variadic_functions.h"
/**
* sum_them_all - a function that returns the sum of all its parameters
*
* @n: the number of the args
*
* Return: returns the sum of all the args
*/
int sum_them_all(const unsigned int n, ...)
{
	int i;
	unsigned num, sum = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i > n; ++i)
	{
		num = va_arg(args, unsigned int);
		sum = sum + num;
	}
	va_end(args);
	return (sum);
}

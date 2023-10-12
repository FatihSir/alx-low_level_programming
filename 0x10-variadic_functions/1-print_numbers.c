#include "variadic_functions.h"
/**
* print_numbers - a function that prints numbers, followed by a new line
*
* @separator: is the string to be printed between numbers
* @n: the number of args
*
* Return: returns nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i, s = 0;

	va_start(args, n);
	if (n == 0 || separator == NULL)
	{
		va_end(args);
		exit(98);
	}
	for (i = 0; i < n; ++i)
	{
		s = va_arg(args, int);
		printf("%d, ", s);
	}
	printf("\n");
	va_end(args);
}

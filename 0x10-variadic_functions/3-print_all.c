#include "variadic_functions.h"
/**
* print_all - a function that prints anything
*
* @format:  is a list of types of arguments passed to the function
*
* Return: returns nothing
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int intger, i;
	double floa;

	va_start(args, format);
	if (*format == 'i')
	{
		while (i < 5)
		{
			intger = va_arg(args, int);
			printf("%d,", intger);
		}
		printf("\n");
		va_end(args);
	}
	if (*format == 'f')
	{
		while (i < 5)
		{
			floa = va_arg(args, double);
			printf("%f,", floa);
		}
		printf("\n");
		va_end(args);
	}
}

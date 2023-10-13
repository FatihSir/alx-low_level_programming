#include "variadic_functions.h"
/**
* print_int - a function that prints integer
*
* @sep: a pointer to the separator
* @args: the values to be printed
*
* Return: returns nothing
*/
void print_int(char *sep, va_list args)
{
	printf("%s%d", sep, va_arg(args, int));
}
/**
* print_float - a function that prints float
*
* @sep: a pointer to the separator
* @args: the values to be printed
*
* Return: returns nothing
*/
void print_float(char *sep, va_list args)
{
	printf("%s%f", sep, va_arg(args, double));
}
/**
* print_char - a function that prints char
*
* @sep: a pointer to the separator
* @args: the values to be printed
*
* Return: returns nothing
*/
void print_char(char *sep, va_list args)
{
	printf("%s%c", sep, va_arg(args, int));
}
/**
* print_string - a function that prints string
*
* @sep: a pointer to the separator
* @args: the values to be printed
*
* Return: returns nothing
*/
void print_string(char *sep, va_list args)
{
	char *ptr = va_arg(args, char *);

	if (!ptr)
		ptr = "(nil)";
	printf("%s%s", sep, ptr);
}

/**
* print_all - a function that prints anything
*
* @format:  is a list of types of arguments passed to the function
*
* Return: returns nothing
*/
void print_all(const char * const format, ...)
{
	token_datatype tok[] = {
		{"c", print_char},
		{"¡", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0, j;
	char *sep = "";
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (tok[j].frmt)
		{
			if (format[i] == tok[j].frmt[0])
			{
				tok[j].ops(sep, args);
				sep = ", ";
			}
			++j;
		}
		++i;
	}
	printf("\n");
	va_end(args);
}

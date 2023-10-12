#include "variadic_functions.h"
/**
* print_strings - a function that prints strings, followed by a new line
*
* @separator: is the string to be printed between the strings
* @n: the number of args
*
* Return: returns nothing
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
		{
			for (j = 0; j < strlen(str); ++j)
			{
				printf("%c", str[j]);
			}
		}
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

#ifndef VARIADIC_FUNCTION_FILE
#define VARIADIC_FUNCTION_FILE

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* struct tokens - srtuct datatype
*
* @format: pointer to the format
* @ops: function pointer to call a specific function based on format
*/
typedef struct tokens
{
	char *frmt;
	void (*ops)(char *, va_list);
} token_datatype;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

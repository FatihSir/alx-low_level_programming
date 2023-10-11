#include "main.h"
/**
* print_name - a function that prints a name
*
* @name: the name to be printed
* @f: funtion pointer points to funtion returns nothing
*
*
* Return: returs nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

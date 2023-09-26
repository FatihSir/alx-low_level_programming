#include "main.h"
/**
* set_string - a function that sets the value of a pointer to a char.
*
* @s: the char to be set
* @to: the char to be set to
*
* Return: alway returns nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}

#include "main.h"

/**
* print_sign - program entry
*
* Describtion: print_sign
* @n: is the number to be checked
* Return: The program always returns 0
*
*/

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}

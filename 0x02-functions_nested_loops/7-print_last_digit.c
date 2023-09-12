#include "main.h"

/**
* print_last_digit - program entry
*
* Describtion: The program print_last_digit
*
* @c: is the letter to be checked
*
* Return: The program always returns 0 if the letter is a lowercase
*/
int print_last_digit(int c)
{
	int ld;

	if (c < 0)
		ld = -1 * (c % 10);
	else
		ld = c % 10;

	_putchar(ld + '0');
	return (ld);

}

#include "main.h"

/**
* _islower - program entry
*
* Describtion: The program checks the letter if is it a lowercase or not
*
* @c: is the letter to be checked
*
* Return: The program always returns 0 if the letter is a lowercase
*/

int _islower(int c)
{
	int c;

	if (islower(c) != 0)
		_putchar('1');
	else
		_putchar('0');

	return (0);
}

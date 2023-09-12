#include "main.h"

/**
* print_alphabet - program entry
*
* Describtion: The programs prints the lowercase
*
* Return: The program always returns 0
*
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

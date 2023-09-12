#include "main.h"

/**
* print_alphabet_x10 - program entry
*
* Describtion: The programs prints the lowercase 10 times
*
* Return: The program always returns 0
*
*/

void print_alphabet_x10(void)
{
	int ch;
	int i = 0;

	while (i < 10)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	i++;
	}
}

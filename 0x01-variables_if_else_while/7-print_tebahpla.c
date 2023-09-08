#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Where the program starts
*
* Description: do something
*
* Return: 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}

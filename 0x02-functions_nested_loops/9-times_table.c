#include "main.h"

/**
* times_table - program entry
*
* Describtion: times_table
*
* Return: The program always returns nothing
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/*
			 * space
			 */
			if (prod <= 9)
				_putchar (' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}

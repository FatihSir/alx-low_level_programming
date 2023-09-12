#include "main.h"

/**
* jack_bauer - program entry
*
* Describtion: The program checks the letter if is it a lowercase or not
*
* Return: The program always returns 0 if the letter is a lowercase
*/

void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}

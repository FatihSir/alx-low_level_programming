#include "main.h"

/**
* main - program starts
*
* Describtion: The program checks if it is a  letter
*
* Return: The program always returns 0 if it is a letter
*/

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}

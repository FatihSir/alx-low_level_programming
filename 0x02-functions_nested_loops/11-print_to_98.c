#include "main.h"

/**
* print_to_98 - program entry
*
* Describtion: The program checks if it is a  letter
*
* @n: is the letter to be checked
*
* Return: The program always returns 0 if it is a letter
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}

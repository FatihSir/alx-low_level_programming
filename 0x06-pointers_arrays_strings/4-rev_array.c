#include "main.h"

/**
* reverse_array - function reverse the content of an integer array
*
* @a: the to be reversed array
* @n: The size of the array
*
* Return: returns nothing
*
*/
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n / 2; ++i)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

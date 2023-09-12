#include "main.h"

/**
* _abs - program entry
*
* Describtion: The programs prints the abs value
*
* @n: number
*
* Return: The program always returns 0
*
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}

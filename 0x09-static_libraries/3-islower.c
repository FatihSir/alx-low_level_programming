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
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

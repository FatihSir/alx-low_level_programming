#include "main.h"

/**
* _isalpha - program entry
*
* Describtion: The program checks if it is a  letter
*
* @c: is the letter to be checked
*
* Return: The program always returns 0 if it is a letter
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

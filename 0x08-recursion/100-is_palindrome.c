#include "main.h"
/**
* checker2 - function that helps the main function
*
* @a: the string to be compared
* @c: counts length
*
* Return: return 0 or 1
*/
int checker2(char *a, int c)
{
	if (*a == 0)
		return (c - 1);
	return (checker2(a + 1, c + 1));
}
/**
 * checker1 - function that helps the main function
 * @a: the string to be compared
 * @c: the length
 *
 * Return: returns 0 or 1
 */

int checker1(char *a, int c)
{
	if (*a != *(a + c))
		return (0);
	else if (*a == 0)
		return (1);
	return (checker1(a + 1, c - 2));
}
/**
* is_palindrome - a function that returns 1 if a string is
* a palindrome and 0 if not
*
* @s: the string to be checked
*
* Return: returns 1 if a string is a palindrome and 0 if not
*/
int is_palindrome(char *s)
{
	int c;

	c = checker2(s, 0);
	return (checker1(s, c));
}

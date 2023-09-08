#include <stdio.h>
/**
* main - Where the program starts
*
* Description: Positive anything is better than negative nothing
*
* Return: returns 0 (success)
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}

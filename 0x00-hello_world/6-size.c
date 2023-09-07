#include <stdio.h>

/**
* main : The program starts
*
* Description : This program uses sizeof function 
*
* return : Always main returns 0
*/

int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizof(char));
printf("Size of an int: %lu byte(s)\n", sizof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", size(long long int));
printf("Size of a float: %lu byte(s)\n", size(float));

return (0);
}

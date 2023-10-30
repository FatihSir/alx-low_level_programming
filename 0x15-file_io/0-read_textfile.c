#include "main.h"
/**
* read_textfile - a function that reads a text file and
* prints it to the POSIX standard output.
*
* @filename: the name of the file to be opened or created
* @letters:  is the number of letters it should read and print
*
* Return: returns the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;
	size_t i = 0;
	char c;

	if (filename == NULL)
		return (0);
	ptr = fopen(filename, "r");
	if (ptr == NULL)
		return (0);
	while (i < letters)
	{
		c = fgetc(ptr);
		if (c == EOF)
			break;
		putchar(c);
		++i;
	}
	fclose(ptr);
	return (i);
}

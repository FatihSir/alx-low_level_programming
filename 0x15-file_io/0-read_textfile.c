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
	int ptr;
	ssize_t bytes_read;
	char *buffer;

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	ptr = open(filename, O_RDONLY);
	if (letters > 0)
	{
		bytes_read = read(ptr, buffer, letters);
		write(STDOUT_FILENO, buffer, bytes_read);
	}
	if (bytes_read == -1)
	{
		free(buffer);
		return (0);
	}
	close(ptr);
	free(buffer);
	return (bytes_read);
}

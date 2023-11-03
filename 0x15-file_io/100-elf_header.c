#include "main.h"
/**
* main - a program that displays the information contained int
* he ELF header at the start of an ELF file.
*
* @argv: arguments value
* @argc: arguments count
*
* Return: returns 0
*
*
*/
int main(int argc, char *argv[])
{

	int file;
	char buffer[5];
	ssize_t bytes_read;


	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file\n");
		return (97);
	}
	file = open(argv[1], O_RDWR);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open from file %s\n", argv[1]);
		return (98);
	}
	bytes_read = read(file, buffer, 4);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	if (buffer[0] != 0x7F || buffer[1] != 'E' || buffer[2] != 'L' || buffer[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		return (98);
	}
	close(file);
	return (0);
}

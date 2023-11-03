#include "main.h"
/**
* main - a function to copy the content of one file to another
* @argc: the number of arguments entered
* @argv: pointer to the entered values
* Return: returns 1
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, wr;
	char buffer[1024];
	ssize_t bytes_read = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97); }
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98); }
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
		exit(99); }
	while (bytes_read == 1024)
	{
		bytes_read = read(file_from, buffer, sizeof(buffer));
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read file from %s\n", argv[1]);
			return (98); }
		wr = write(file_to, buffer, bytes_read);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "ERROR: Can't write to %s\n", argv[2]);
			return (99); }}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		return (100); }
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		return (100); }
	return (0);
}

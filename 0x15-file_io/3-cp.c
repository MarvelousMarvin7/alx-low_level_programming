#include "main.h"

#define BUFFER_SIZE 1024
#define STER STDERR_FILENO

/**
 * close_files - close files after working on them
 * @file_from: first file
 * @file_to: second file
 *
 * Return: Nothing
 */
void close_files(int file_from, int file_to)
{
	if (close(file_from) == -1)
	{
		dprintf(STER, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STER, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}

/**
 * main - copy a file content to nother
 * @ac: argument count
 * @av: argument position
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int file_from, file_to;
	char buffer[BUFFER_SIZE];
	ssize_t text_read, text_written;

	if (ac != 3)
	{
		dprintf(STER, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STER, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STER, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((text_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (text_read == -1)
		{
			dprintf(STER, "Error: Can't read from file %s\n",
				av[1]);
			exit(98);
		}
		text_written = write(file_to, buffer, text_read);

		if (text_written == -1 || text_written != text_read)
		{
			dprintf(STER, "Error: Can't write to %s\n", av[2]);
				exit(99);
		}
	}
	close_files(file_from, file_to);

	return (0);
}

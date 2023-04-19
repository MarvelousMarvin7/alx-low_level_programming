#include "main.h"

/**
 * read_textfile - read file from memory
 * @filename: name of file
 * @letters: number of letters to read and print
 *
 * Return: number of letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byte_to_read, byte_to_write;
	size_t total_byte_read = 0;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters + 1);
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	while (total_byte_read < letters)
	{
		byte_to_read = read(fd, buffer, letters - total_byte_read);
		if (byte_to_read == -1)
		{
			close(fd);
			return (0);
		}
		else if (byte_to_read == 0)
			break;
		byte_to_write = write(STDOUT_FILENO, buffer, byte_to_read);
		if (byte_to_write == -1 || byte_to_write != byte_to_read)
		{
			close(fd);
			return (0);
		}
		total_byte_read += byte_to_read;
	}
	free(buffer);
	close(fd);

	return (total_byte_read);
}

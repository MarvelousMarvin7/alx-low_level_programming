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
	int fd;
	char *buf;
	size_t count = 0;
	ssize_t bytes_to_read, bytes_to_write;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters + 1);
	if (!buf)
	{
		close(fd);
		return (0);
	}
	while (count < letters)
	{
		bytes_to_read = read(fd, buf, letters - count);
		if (bytes_to_read == -1)
		{
			close(fd);
			return (0);
		}
		else if (bytes_to_read == 0)
			break;
		bytes_to_write = write(STDOUT_FILENO, buf, bytes_to_read);
		if (bytes_to_write == -1 || bytes_to_write != bytes_to_read)
		{
			close(fd);
			return (0);
		}
		count += bytes_to_read;
	}
	free(buf);
	close(fd);

	return (count);
}

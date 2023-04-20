#include "main.h"
#include <string.h>

/**
 * create_file - create a new file
 * @text_content: content to be written in the file
 * @filename: name of file
 *
 * Return: 1 if file is create
 */
int create_file(const char *filename, char *text_content)
{
	int fd, result;
	ssize_t text_length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		result = write(fd, text_content, text_length);
		if (result == -1 || result != text_length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

#include "main.h"

/**
 * append_text_to_file - add to exiting text in a file from the end
 * @filename: name of file to append
 * @text_content: content to add
 *
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result, text_length;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
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

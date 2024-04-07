#include "main.h"

/**
 * create_file - Creates a file, writing text_content into it if not NULL.
 * @filename: Target file name.
 * @text_content: Text to write into the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (len = 0; text_content[len];)
			len++;
	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(file_descriptor, text_content, len);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}

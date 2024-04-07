#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The file name.
 * @text_content: Text to append.
 *
 * Description: Opens the file in append mode and writes @text_content to it.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, text_length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (text_length = 0; text_content[text_length];)
			text_length++;
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(file_descriptor, text_content, text_length);
	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);
	close(file_descriptor);
	return (1);
}

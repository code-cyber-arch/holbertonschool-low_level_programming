#include "main.h"

/**
 * handle_error - Handles file-related errors.
 * @src_fd: The file descriptor of the source file.
 * @dest_fd: The file descriptor of the destination file.
 * @src_file: The name of the source file.
 */

void handle_error(int src_fd, int dest_fd, const char *src_file)
{
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
		exit(99);
	}
}

/**
 * copy_file - Copies the content of one file to another file.
 * @src_file_name: The name of the source file.
 * @dest_file_name: The name of the destination file.
 */

void copy_file(const char *src_file_name, const char *dest_file_name)
{
	int src_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	src_fd = open(src_file_name, O_RDONLY);
	dest_fd = open(dest_file_name, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	handle_error(src_fd, dest_fd, src_file_name);

	bytes_read = 1024;
	while (bytes_read == 1024)
	{
		bytes_read = read(src_fd, buffer, 1024);
		if (bytes_read == -1)
			handle_error(-1, 0, src_file_name);
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
			handle_error(0, -1, src_file_name);
	}

	close(src_fd);
	close(dest_fd);
}

/**
 * main - Entry point
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp source_file destination_file");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}

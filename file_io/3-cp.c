#include "main.h"

/**
 * check_open_files - Checks if files can be opened.
 * @src_fd: File descriptor of the source file.
 * @dest_fd: File descriptor of the destination file.
 * @argv: Arguments vector.
 */
void check_open_files(int src_fd, int dest_fd, char *argv[])
{
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * copy_files - Copies the contents of one file to another.
 * @src_fd: File descriptor of the source file.
 * @dest_fd: File descriptor of the destination file.
 */
void copy_files(int src_fd, int dest_fd)
{
	ssize_t nchars, nwr;
	char buf[1024];

	while ((nchars = read(src_fd, buf, 1024)) > 0)
	{
		nwr = write(dest_fd, buf, nchars);
		if (nwr == -1)
			check_open_files(0, -1, NULL);
		else if (nwr != nchars)
		{
			dprintf(STDERR_FILENO, "Error: Could not write all bytes to file\n");
			exit(99);
		}
	}
	if (nchars == -1)
		check_open_files(-1, 0, NULL);
}

/**
 * close_files - Closes the file descriptors.
 * @src_fd: File descriptor of the source file.
 * @dest_fd: File descriptor of the destination file.
 */
void close_files(int src_fd, int dest_fd)
{
	int err_close;

	err_close = close(src_fd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	err_close = close(dest_fd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
}

/**
 * main - Entry point of the program.
 * @argc: Number of arguments.
 * @argv: Arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	src_fd = open(argv[1], O_RDONLY);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_open_files(src_fd, dest_fd, argv);
	copy_files(src_fd, dest_fd);
	close_files(src_fd, dest_fd);
	return (0);
}

#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function that allocates 1024 bytes to buffer
 * @file: name of the file the buffer is storing chars for.
 *
 * Return: pointer to newly allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);

}
/**
 * close_file - function that closes file descriptors
 * @fd: file descriptor to be closed
 */

void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n"), fd);
		exit(100);
	}
}

/**
 * main - function that copies contents of a file to another file
 * @argc: arguments to be copied
 * @argv: array of pointers to arguments
 *
 * Return: 0 (success)
 *
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	rd = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(fd_to, buffer, rd);
		if (fd_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buffer);
	close_file(fd_from);
	close_file(fd_to);

	return (0);

}

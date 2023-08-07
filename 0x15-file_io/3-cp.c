#include "main.h"

/**
 * *main - function copies content of file to another file
 * @argc: name of file to be copied
 * @argv: contents of file thats being copied
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int from, to, r;
	char buffer[1024];

	if (argc != 2)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	while ((r = read(from, buffer, sizeof(buffer))) > 0)
	{
		write(to, buffer, r);
	}

	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);

	}
	if (close(from) == -1)
	{
		dprintf(2, "Error: Can't close %d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(2, "Error: Cant close %d\n", to);
		exit(100);
	}

	return (0);
}

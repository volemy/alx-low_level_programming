#include "main.h"

/**
 * append_text_to_file - function that appends text at end of file
 * @filename: name of file
 * @text_content: text to be appended
 * Description: don not create file if it does not exist
 *            : if filename is NULL return -1
 *
 * Return: 1 (success), otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, strlen, bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (strlen = 0; text_content[strlen];)
			strlen++;
	}

	bytes = write(fd, text_content, strlen);
	if (bytes == -1)
	{

		close(fd);
		return (-1);
	}

	close(fd);

	return (1);

}

#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: this is the file to create
 * @text_content: contents of file to be created
 *
 * Description: if file already exists truncate it
 *              if text_content is NULL create an empty file
 *              created file must have rw------- permissions
 * Return: 1 (success), otherwise (-1)
 */

int create_file(const char *filename, char *text_content)
{
        int fd, strlen, bytes;

        if (filename == NULL)
                return (-1);

        if (text_content == NULL)
                text_content = "";

        fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

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

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>  /* Include the string.h header */
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, write_result, close_result;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        write_result = write(fd, text_content, strlen(text_content));
        if (write_result == -1)
        {
            close(fd);
            return (-1);
        }
    }

    close_result = close(fd);
    if (close_result == -1)
        return (-1);

    return (1);
}

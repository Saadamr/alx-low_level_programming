#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>  /* Include the string.h header */
#include "main.h"

/**
 * create_file - Creates a file with specific permissions and writes content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
    int fd, write_result, close_result;
    mode_t permissions = S_IRUSR | S_IWUSR; /* rw------- */

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
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

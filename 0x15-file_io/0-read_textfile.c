#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         0 if the file cannot be opened or read, if filename is NULL,
 *         or if write fails to write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, r_result, w_result;
    char *buf;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = malloc(sizeof(char) * letters);
    if (buf == NULL)
    {
        close(fd);
        return (0);
    }

    r_result = read(fd, buf, letters);
    if (r_result == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    w_result = write(STDOUT_FILENO, buf, r_result);
    if (w_result == -1 || (size_t)w_result != (size_t)r_result)
    {
        free(buf);
        close(fd);
        return (0);
    }

    free(buf);
    close(fd);
    return (r_result);
}

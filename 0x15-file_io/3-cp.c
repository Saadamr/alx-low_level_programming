#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

#define BUFF_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @ac: The number of command-line arguments.
 * @av: An array of strings representing the command-line arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int ac, char **av)
{
    int fd_from, fd_to, read_result, write_result, close_result;
    char buffer[BUFF_SIZE];

    if (ac != 3)
    {
        dprintf(2, "Usage: %s file_from file_to\n", av[0]);
        exit(97);
    }

    fd_from = open(av[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }

    fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", av[2]);
        close(fd_from);
        exit(99);
    }

    while ((read_result = read(fd_from, buffer, BUFF_SIZE)) > 0)
    {
        write_result = write(fd_to, buffer, read_result);
        if (write_result == -1 || write_result != read_result)
        {
            dprintf(2, "Error: Can't write to %s\n", av[2]);
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    }

    if (read_result == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", av[1]);
        close(fd_from);
        close(fd_to);
        exit(98);
    }

    close_result = close(fd_from);
    if (close_result == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    close_result = close(fd_to);
    if (close_result == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return (0);
}

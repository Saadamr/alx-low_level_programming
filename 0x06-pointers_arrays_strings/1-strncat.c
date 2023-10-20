#include "main.h"

/**
 * _strncat - Concatenates two strings with a maximum number of bytes to copy.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i = 0;

/* Find the length of dest */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Append characters from src to dest, up to a maximum of n bytes */
while (src[i] != '\0' && i < n)
{
dest[dest_len] = src[i];
dest_len++;
i++;
}

/* Add a null-terminator to the end of the concatenated string */
dest[dest_len] = '\0';

return dest;
}

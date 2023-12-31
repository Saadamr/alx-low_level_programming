#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
    int len = _strlen(str);
    int i, n;

    if (len % 2 == 0)
        n = len / 2;
    else
        n = (len + 1) / 2;

    for (i = n; i < len; i++)
        _putchar(str[i]);
    _putchar('\n');
}

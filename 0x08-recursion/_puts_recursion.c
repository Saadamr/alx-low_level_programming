#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') // Base case: If the current character is null terminator, print a new line and return.
    {
        _putchar('\n');
        return;
    }
    _putchar(*s); // Print the current character
    _puts_recursion(s + 1); // Recursive call with the next character
}


#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to be converted.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
            /* Convert lowercase letters to uppercase */
str[i] = str[i] - 32;
}
i++;
}

return str;
}

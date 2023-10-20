#include "main.h"

int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return 1;
}
}

return 0;
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (is_separator(str[i]) && str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
/* Convert lowercase letter to uppercase */
str[i + 1] = str[i + 1] - 32;
}
i++;
}

if (str[0] >= 'a' && str[0] <= 'z')
{
/* Capitalize the first character of the string */
str[0] = str[0] - 32;
}

return str;
}

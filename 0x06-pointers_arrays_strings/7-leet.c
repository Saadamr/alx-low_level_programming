#include "main.h"

/**
 * leet - Encodes a string into "1337".
 * @str: The string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
char *leet_letters = "aAeEoOtTlL";
char *leet_substitutes = "4433007711";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_letters[j] != '\0'; j++)
{
if (str[i] == leet_letters[j])
{
str[i] = leet_substitutes[j];
break;
}
}
}

return str;
}

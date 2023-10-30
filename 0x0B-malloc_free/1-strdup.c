#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string in a newly allocated memory space
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int length = 0;
unsigned int i;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

dup_str = malloc(sizeof(char) * (length + 1));

if (dup_str == NULL)
return (NULL);

for (i = 0; i <= length; i++)
dup_str[i] = str[i];

return (dup_str);
}

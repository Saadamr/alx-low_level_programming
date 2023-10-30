#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: The number of arguments
 * @av: An array of argument strings
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
char *concat_str;
int i, j, k, length = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
length++;
length++; /* for newline character */
}

length++; /* for null terminator */

concat_str = malloc(sizeof(char) * length);

if (concat_str == NULL)
return (NULL);

k = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
concat_str[k++] = av[i][j];
concat_str[k++] = '\n';
}

concat_str[k] = '\0';

return (concat_str);
}

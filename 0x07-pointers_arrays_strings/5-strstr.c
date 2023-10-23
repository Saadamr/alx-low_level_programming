#include "main.h"
#include <stddef.h> /* Include the <stddef.h> header to define NULL */

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack;
char *n = needle;

while (*haystack && *n && *haystack == *n)
{
haystack++;
n++;
}

if (!*n)
return h;

haystack = h + 1;
}

return NULL;
}

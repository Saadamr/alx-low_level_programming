/* _strchr.c */
#include "main.h"
#include <stddef.h> /* Add this line to include <stddef.h> */

char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return s;
        }
        s++;
    }

    if (c == '\0')
    {
        return s; /* Return a pointer to the null terminator if c is '\0'. */
    }

    return NULL; /* Return NULL if the character is not found. */
}

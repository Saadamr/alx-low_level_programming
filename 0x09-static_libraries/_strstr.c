/* _strstr.c */
#include "main.h"
#include <stddef.h> /* Add this line to include <stddef.h> */

char *_strstr(char *haystack, char *needle)
{
    char *sub;
    char *find;

    if (*needle == '\0')
    {
        return haystack;
    }

    while (*haystack)
    {
        sub = haystack;
        find = needle;

        while (*find && *sub == *find)
        {
            sub++;
            find++;
        }

        if (*find == '\0')
        {
            return haystack;
        }

        haystack++;
    }

    return NULL; /* Return NULL if no substring is found. */
}

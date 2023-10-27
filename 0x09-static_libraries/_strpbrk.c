/* _strpbrk.c */
#include "main.h"
#include <stddef.h> /* Add this line to include <stddef.h> */

char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        for (int i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
            {
                return s;
            }
        }
        s++;
    }

    return NULL; /* Return NULL if no matching character is found. */
}

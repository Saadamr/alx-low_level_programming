#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
    int len = 0, i;
    char tmp;
    while (s[len] != '\0')
    {
        len++;
    }
    len--;
    for (i = 0; i < len; i++, len--)
    {
        tmp = s[i];
        s[i] = s[len];
        s[len] = tmp;
    }
}

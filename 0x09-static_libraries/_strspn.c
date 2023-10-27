/* _strspn.c */
#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int is_match;

    while (*s)
    {
        is_match = 0;
        for (int i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
            {
                is_match = 1;
                break;
            }
        }
        if (is_match)
        {
            count++;
            s++;
        }
        else
        {
            break;
        }
    }

    return count;
}

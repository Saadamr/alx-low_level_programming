#include "main.h"
int set_bit(unsigned long int *n, unsigned int index)
{
    /* Ensure index is within bounds */
    if (index >= sizeof(unsigned long int) * 8) {
        return -1;
    }

    *n |= (1UL << index);
    return 1;
}

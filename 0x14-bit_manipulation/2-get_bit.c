#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to extract the bit from
 * @index: The index of the bit to retrieve
 *
 * Return: Value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
    /* Ensure index is within bounds by checking against the maximum index */
    if (index >= sizeof(unsigned long int) * 8) {
        return -1;
    }

    return (int)((n >> index) & 1);
}

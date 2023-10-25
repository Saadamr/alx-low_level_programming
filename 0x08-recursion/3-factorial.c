#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number for which the factorial is to be calculated.
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
if (n < 0)
return (-1);  /* If n is negative, return -1 to indicate an error. */
if (n == 0)
return (1);   /* Base case: factorial of 0 is 1. */
return (n * factorial(n - 1));  /* Recursive case. */
}

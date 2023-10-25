#include "main.h"

/**
 * sqrt_recursive - Recursive function to find the square root.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int sqrt_recursive(int n, int guess)
{
if (guess * guess == n)
{
return (guess);  /* If guess^2 equals n, return guess as the square root. */
}
if (guess * guess > n)
{
return (-1);  /* If guess^2 exceeds n, n does not have a natural square root. */
}
return sqrt_recursive(n, guess + 1);  /* Increment guess and continue the search. */
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to find the square root.
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);  /* If n is negative, return -1 to indicate an error. */
}
return sqrt_recursive(n, 0);
}

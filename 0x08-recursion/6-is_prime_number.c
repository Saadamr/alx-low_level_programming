#include "main.h"

/**
 * is_prime_recursive - Helper function to check for prime.
 * @n: The number to check for prime.
 * @divisor: The current divisor being tested.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
if (n < 2 || (n % divisor == 0 && divisor != 2))
return 0;  /* Not prime if n is less than 2 or divisible by a number other than 2. */
if (divisor * divisor > n)
return 1;  /* If no divisor found by this point, n is prime. */
return is_prime_recursive(n, divisor + 1);
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
return 0;  /* 0 and 1 are not prime numbers. */
return is_prime_recursive(n, 2);
}

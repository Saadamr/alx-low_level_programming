#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit1 = 0;
int digit2 = 1;
while (digit1 <= 8)
{
while (digit2 <= 9)
{
putchar(digit1 + '0');
putchar(digit2 + '0');
if (!(digit1 == 8 && digit2 == 9))
{
putchar(',');
putchar(' ');
}
digit2++;
}
digit1++;
digit2 = digit1 + 1;
}
putchar('\n');
return (0);
}

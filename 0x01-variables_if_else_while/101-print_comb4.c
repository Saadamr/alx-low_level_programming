#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit1, digit2, digit3;
    int combinations = 0;
for (digit1 = 0; digit1 <= 7; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
{
for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
{
putchar(digit1 + '0');
putchar(digit2 + '0');
putchar(digit3 + '0');
if (combinations < 987)
{
putchar(',');
putchar(' ');
}
combinations++;
}
}
}
putchar('\n');
return (0);
}

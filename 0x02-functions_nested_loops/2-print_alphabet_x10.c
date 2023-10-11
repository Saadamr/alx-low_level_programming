#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0; i < 10; i++) /* Loop 10 times */
{
for (letter = 'a'; letter <= 'z'; letter++) /* Loop through the alphabet */
{
_putchar(letter);
}
_putchar('\n'); /* Print a newline after each set of alphabets */
}
}

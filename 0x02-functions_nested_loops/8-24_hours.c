#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer, 00:00 to 23:59.
 */
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar((hour / 10) + '0');   /* Print the tens digit of the hour */
_putchar((hour % 10) + '0');   /* Print the ones digit of the hour */
_putchar(':');                 /* Print the colon separator */
_putchar((minute / 10) + '0'); /* Print the tens digit of the minute */
_putchar((minute % 10) + '0'); /* Print the ones digit of the minute */
_putchar('\n');                /* Print a newline */
}
}
}

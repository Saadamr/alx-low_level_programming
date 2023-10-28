#include <stdio.h>

int main(int argc, char *argv[])
{
(void)argv; /* Suppress unused parameter warning */

printf("%d\n", argc - 1);
return (0);
}

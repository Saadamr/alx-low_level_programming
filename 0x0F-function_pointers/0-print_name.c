#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to a function that formats the name
 *
 * Description: This function takes a name and a function pointer. It uses the
 * provided function to format and print the name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}

#include "main.h"
/**
* _print_rev_recursion - it Prints a string in reverse direction.
* @s: The string is to be printed.
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

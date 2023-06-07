#include "main.h"
/**
* _0-puts_recursion code
* return = 0
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}

#include "main.h"
/**
* _strlen_recursion - Returns the length properties  of a string.
* @s: The string is to be measured or calculated.
*
* Return: str lenght.
*/
int _strlen_recursion(char *s)
{
int longit = 0;
if (*s)
{
longit++;
longit += _strlen_recursion(s + 1);
}
return (longit);
}

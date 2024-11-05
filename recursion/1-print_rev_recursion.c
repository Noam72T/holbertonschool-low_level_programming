#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - Function To Print
* @s: Pointers of the string
* Return : Success
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}

#include "main.h"

/**
* print_rev - Entry Function
* @s: reset The pointers
* Return: returns nothing
*/

void print_rev(char *s)
{
int reverse = 0;
while (s[reverse] != '\0')
{
reverse++;
}
for (reverse -= 1; reverse >= 0; reverse--)
{
_putchar(s[reverse]);
}
_putchar('\n');
}

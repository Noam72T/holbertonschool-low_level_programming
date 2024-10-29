#include "main.h"

/**
* _puts - Entry Function
* @str: reset The pointers
* Return: returns nothing
*/

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

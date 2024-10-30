#include "main.h"
#include <stdio.h>

/**
* puts_half - Entry Function
* @str: reset The pointers
* Return: returns nothing
*/

void puts_half(char *str)
{
int len, i;
int startchar;
while (str[len] != '\0')
{
len++;
}
startchar = (len + 1)  / 2;
for (i = startchar; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

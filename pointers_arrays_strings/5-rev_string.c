#include "main.h"
#include <stdio.h>

/**
* rev_string - Entry Function
* @s: reset The pointers
* Return: returns nothing
*/

void rev_string(char *s)
{
int reverse = 0;
int i;
while (s[reverse] != '\0')
{
reverse++;
}
for (i = 0; i < reverse; i++)
{
putchar(s[i]);
}
putchar('\n');
for (reverse -= 1; reverse >= 0; reverse--)
{
putchar(s[reverse]);
}
putchar('\n');
}

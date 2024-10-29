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
while (s[reverse] != '\0')
{
reverse++;
}
printf("%s\n", s);
for (reverse -= 1; reverse >= 0; reverse--)
{
printf("%c", s[reverse]);
}
printf("\n");
}

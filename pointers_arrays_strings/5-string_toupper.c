#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
* *string_toupper - Entry Function
* @str: reset The pointers
* Return: returns nothing
*/

char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 'a' + 'A';
}
return (str);
}

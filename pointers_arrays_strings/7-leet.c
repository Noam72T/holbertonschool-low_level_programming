#include "main.h"
#include <stdio.h>


/**
* *leet - Entry Function
* @str: reset The pointers
* Return: returns nothing
*/

char *leet(char *str)
{
char lettre[] = "aAeEoOtTlL";
char numb[] = "4433007711";
int i;
int j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; lettre[j] != '\0'; j++)
{
if (str[i] == lettre[j])
{
str[i] = numb[j];
break;
}
}
}
return (str);
}

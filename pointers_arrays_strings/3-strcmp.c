#include "main.h"
#include <stdio.h>

/**
* _strcmp - Entry Function
* @s1: reset The pointers
* @s2: 2 pointers
* Return: returns nothing
*/


int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (s1[i] - s2[i]);
}

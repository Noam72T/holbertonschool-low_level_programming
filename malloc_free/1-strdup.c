#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - Function Main
* @str: - contains String
* Return: Always
*/

char *_strdup(char *str)
{
char *a;
int i, lenght;
if (str == NULL)
{
return (NULL);
}
for (lenght = 0; str[lenght] != '\0'; lenght++)
{
a = malloc((lenght + 1) * sizeof(char));
}
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < lenght; i++)
{
a[i] = str[i];
}
a[i] = '\0';
return (a);
}

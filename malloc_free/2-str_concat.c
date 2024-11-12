#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *str_concat - Function Main
* @s1: - chaine 1
* @s2: - chaine 2
* Return: Always
*/

char *str_concat(char *s1, char *s2)
{
char *s;
int i = 0;
int j = 0;
int k = 0;
int l = 0;
{
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i])
{
i++;
}
while (s2[j])
{
j++;
}
l = i + j;
s = malloc((l + 1) * sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (k = 0; k < i; k++)
{
s[k] = s1[k];
}
for (j = 0; j < l - i; j++)
{
s[k + j] = s2[j];
}
s[k + j] = '\0';
return (s);
}
}

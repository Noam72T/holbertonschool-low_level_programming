#include "main.h"
#include <stdio.h>

/**
* rev_string - Entry Function
* @s: reset The pointers
* Return: returns nothing
*/

void rev_string(char *s)
{
char tmp;
int i, len, len1;
len = 0;
while (s[len] != '\0')
{
len++;
}
len1 = len - 1;
printf("%s\n", s);
for (i = 0; i < len / 2; i++)
{
tmp = s[i];
s[i] = s[len1];
s[len1--] = tmp;
}
printf("%s\n", s);
}

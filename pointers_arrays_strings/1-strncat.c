#include "main.h"
#include <stdio.h>

/**
* *_strncat - Entry Function
* @src: reset The pointers
* @dest: 2 pointers
* @n: 3 Pointers
* Return: returns nothing
*/


char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j])
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}

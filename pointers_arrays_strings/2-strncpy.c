#include "main.h"

/**
* *_strncpy - Entry Function
* @dest: Pointers 1
* @src: Pointers 2
* @n: POINTERS 3
* Return: Value of the dest
*/


char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i]; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}

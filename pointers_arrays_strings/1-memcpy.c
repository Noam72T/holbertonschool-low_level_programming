#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - Entry Function
 * @dest: Pointers Dest
 * @src: Pointers source
 * @n: Not négatif number
 * Return: returns nothing
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
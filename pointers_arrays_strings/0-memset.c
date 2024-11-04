#include "main.h"
#include <stdio.h>

/**
 * *_memset - Entry Function
 * @s: Pointers
 * @b: Octets
 * @n: Not négatif number
 * Return: returns nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
    s[i] = b;
    }
    return (s);
}
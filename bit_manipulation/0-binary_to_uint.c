#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Function main
 * @b: pointers
 * Return: Resultat
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i;

    if (b == NULL)
    {
        return (0);
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
    {
        return (0);
    }
    result = result * 2 + (b[i] - '0');
    }
    return (result);
}

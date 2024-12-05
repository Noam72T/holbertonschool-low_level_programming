#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit -Entry Function
 * @n: pointers
 * @index: index bit
 * Return: Print the result
 */

int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= 64)
    {
        return (-1);
    }
    return ((n >> index) & 1);
}

#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary -Entry Function
 * @n: pointers
 * Return: Resultat
 */

void print_binary(unsigned long int n)
{
int zero = 1;
int i;
for (i = 63; i >= 0; i--)
{
int bit = (n >> i) & 1;
if (bit == 1 || !zero)
{
putchar(bit + '0');
zero = 0;
}
}
if (zero)
{
putchar('0');
}
}

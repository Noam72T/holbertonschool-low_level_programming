#include "main.h"

/**
* print_line - prints _ to ___________
* @n: number stock
* Return: returns nothing
*/


void print_line(int n)
{

int o, p;

for (o = 0; o < n; o++)
{
for (p = 0; p < o; p++)
{
_putchar('_');
}
_putchar('\n');
}
}

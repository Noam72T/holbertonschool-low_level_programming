#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_last_digit - Entry Function
* @n: number aleatoire
* Print "_putchar in newline"
* Return: 0.
*/

int print_last_digit(int n)
{
int y;
if (n < 0)
n = -n;
y = n % 10;
if (y < 0)
y = -y;
_putchar(y + '0');
return (y);
}

#include "main.h"
#include <stdio.h>

/**
* is_prime_number - Function To Print
* @n: Value of number.
* Return: 0 or 1.
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime(n, 2));
}

/**
* is_prime - Enty Funtion
* @n: The number .
* @i: The dividor
* Return: 1 if n is prime, 0 if not.
*/

int is_prime(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (is_prime(n, i + 1));
}

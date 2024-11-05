#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion_helper - Function To Print
* @n: Value OF the string
* @guess: Value of num
* Return: 1 or 0 or value
*/

int _sqrt_recursion_helper(int n, int guess)
{
if (guess * guess > n)
return (-1);
if (guess * guess == n)
return (guess);
return (_sqrt_recursion_helper(n, guess + 1));
}

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to find the square root of.
* Return: The natural square root of n, or -1 if n has no natural square root.
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_recursion_helper(n, 0));
}

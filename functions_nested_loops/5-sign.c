#include "main.h"

/**
* _isalpha - Entry Function
* @n: = The function
* Print "_putchar in newline"
* Return: 1 if n > 0
* 0 === zero
* -1 if n < 0.
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

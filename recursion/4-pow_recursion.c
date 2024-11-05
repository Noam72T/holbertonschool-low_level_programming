#include "main.h"
#include <stdio.h>

/**
* _pow_recursion - Function To Print
* @x: Value X
* @y: Value y
* Return: -1 or 1 or Recursion
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}

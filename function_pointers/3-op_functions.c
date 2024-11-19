#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - Function main
* @a: Pointers 1
* @b: Pointers 2
* Return: Always
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - Function main
* @a: Pointer A
* @b: Pointer B
* Return: Always
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - Function main
* @a: Pointers 1
* @b: Pointers 2
* Return: Always
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - Function main
* @a: pointer 1
* @b: pointer 2
* Return: Always
*/

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
* op_mod - Function
* @a: pointer 1
* @b: pointer 2
* Return: Always
*/

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

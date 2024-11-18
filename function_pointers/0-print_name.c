#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - Function Main
* @name: - contains Char
* @f: - void
* Return: Always
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL && f == NULL)
{
f(name);
}
}

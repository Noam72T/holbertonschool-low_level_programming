#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - Function Main
* @array: - contains Char
* @size: - void
* @cmp: - cmp
* Return: Always
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}

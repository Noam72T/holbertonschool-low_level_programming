#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
* array_iterator - Function Main
* @array: - contains Char
* @size: - size
* @action: Action
* Return: Always
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

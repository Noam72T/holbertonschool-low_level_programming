#include <stdio.h>

/**
* clear_bit - Function clear
* @n: Pointer to the number to modify.
* @index: Index
* Return: return 1 if work
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= 64)
return (-1);

*n &= ~(1UL << index);
return (1);
}

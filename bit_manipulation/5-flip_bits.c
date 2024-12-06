#include <stdio.h>
#include "main.h"

/**
* flip_bits - Function Count
* @n: Pointers 1 number.
* @m: Pointer 2 number.
* Return: Count.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result;
unsigned int count = 0;
result = n ^ m; 
while (result)
{
count += result & 1; 
result >>= 1;        
}
return (count);
}
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *malloc_checked - Function Main
* @b: - contains String
* Return: Always
*/

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}

#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Entry Functions
* @a: Pointers 1
* @size: Size of the string
* Return: return s c or Null
*/

void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int i;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sum1, sum2);
}

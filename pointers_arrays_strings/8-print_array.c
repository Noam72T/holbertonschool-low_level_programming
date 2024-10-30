#include "main.h"
#include <stdio.h>

/**
* print_array - Entry Function
* @a: reset The pointers
* @n: Print the pointers
* Return: returns nothing
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}

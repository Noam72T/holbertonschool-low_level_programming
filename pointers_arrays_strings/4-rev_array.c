#include "main.h"


/**
* reverse_array - Entry Function
* @a: reset The pointers
* @n: 2 pointers
* Return: returns nothing
*/

void reverse_array(int *a, int n)
{
int i;
for (i = 0; i < n / 2; i++)
{
int temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}

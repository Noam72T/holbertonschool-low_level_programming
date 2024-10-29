#include "main.h"

/**
* reset_to_98 - Entry Function
* @a: change the pointers
* @b: reset The pointers
* Return: returns nothing
*/

void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}

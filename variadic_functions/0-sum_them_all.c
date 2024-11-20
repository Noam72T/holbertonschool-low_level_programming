#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - Function Main
* @n: - contains Char
* Return: Always
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list list;
if (n == 0)
return (0);
va_start(list, n);
for (i = 0; i < n; i++)
sum += va_arg(list, int);
va_end(list);
return (sum);
}

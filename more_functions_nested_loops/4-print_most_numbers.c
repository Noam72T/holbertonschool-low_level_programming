#include "main.h"

/**
* print_most_numbers - Print the Alphabet and ignore 2 and 4.
* Return: Always.
*/

void print_most_numbers(void)
{
int num;

for (num = 48; num <= 58 ; num++)
{
if (num != 50 && num != 52)
_putchar(num);
}
_putchar('\n');
}

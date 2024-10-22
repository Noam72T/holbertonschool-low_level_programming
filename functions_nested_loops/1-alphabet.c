#include "main.h"

/**
* print_alphabet - Entry Function
* Print "_putchar in newline"
* Return: 0.
*/

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}

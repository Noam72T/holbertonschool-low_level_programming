#include "main.h"

/**
* print_alphabet_x10 - Print if the Alphabet.
* Return: Always.
*/

void print_alphabet_x10(void)
{
int alpha = 0;
char c;
while (alpha < 10)
{     
for (c = 'a'; c <= 'z' ; c++)
{
_putchar(c);
}
alpha++;
_putchar('\n');
}
}

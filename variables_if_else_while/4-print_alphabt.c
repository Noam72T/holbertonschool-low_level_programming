#include <stdio.h>

/**
* main - Print the Alphabet and ignore e and q.
* Return: Always.
*/

int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
if (alphabet != 'e' && alphabet != 'q')
putchar(alphabet);
}
putchar('\n');
return (0);
}

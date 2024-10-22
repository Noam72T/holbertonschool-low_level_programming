#include "main.h"
#include <ctype.h>

/**
* _isalpha - Entry Function
* @c: = The charcters
* Print "_putchar in newline"
* Return: 0.
*/

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

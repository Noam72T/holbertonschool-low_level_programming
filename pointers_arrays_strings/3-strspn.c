#include "main.h"
#include <stddef.h>

/**
* *_strspn - Entry Functions
* @s: Pointers 1
* @accept: String
* Return: return s c or Null
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
n++;
break;
}
a++;
}
if (!*a)
break;
s++;
}
return (n);
}

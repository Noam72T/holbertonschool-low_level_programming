#include "main.h"
#include <stddef.h>

/**
* *_strpbrk - Entry Functions
* @s: Pointers 1
* @accept: Pointers accept
* Return: return s c or Null
*/


char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return (NULL);
}

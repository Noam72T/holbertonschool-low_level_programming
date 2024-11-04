#include "main.h"
#include <stddef.h>

/**
* *_strchr - Entry Functions
* @s: Pointers 1
* @c: Character c
* Return: return s c or Null
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}

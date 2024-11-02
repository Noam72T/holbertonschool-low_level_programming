#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

/**
* _atoi - Entry Function
* @s: reset The pointers
* Return: returns nothing
*/

int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int digit_found = 0;
int letter_count = 0;
while (s[i] == ' ')
{
i++;
}
while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
{
sign *= -1;
}
i++;
}
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
if (result > (INT_MAX / 10) || 
(result == (INT_MAX / 10) && (s[i] - '0') > (sign == 1 ? 7 : 8)))
{
return (sign == 1) ? INT_MAX : INT_MIN;
}
result = result * 10 + (s[i] - '0');
digit_found = 1;
}
else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
{
letter_count++;
}
else if (digit_found)
{
break;
}
i++;
}
return (digit_found ? result * sign : 0);
}

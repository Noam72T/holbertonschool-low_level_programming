#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
* get_op_func - Function Main
* @s: Pointers
* Return: Always
*/
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
{ "+", op_add },
{ "-", op_sub },
{ "*", op_mul },
{ "/", op_div },
{ "%", op_mod },
{ NULL, NULL }
};
while (i < 5)
{
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
i++;
}
return (0);
}

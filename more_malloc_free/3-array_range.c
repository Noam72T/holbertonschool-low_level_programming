#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *array_range - Function Main
* @min: - contains String
* @max: - String
* Return: Always
*/

int *array_range(int min, int max)
{
int *pt;
int array;
if (min > max)
{
return (NULL);
}
pt = malloc(sizeof(int) * (max - min + 1));
if (pt == NULL)
{
return (NULL);
}
array = 0;
while (min <= max)
{
pt[array] = min;
min++;
array++;
}
return (pt);
}

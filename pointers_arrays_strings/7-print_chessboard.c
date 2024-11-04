#include "main.h"
#include <stddef.h>

/**
* print_chessboard - Entry Functions
* @a: Pointers Board
* Return: Always
*/


void print_chessboard(char (*a)[8])
{
int i = 0;
int j = 0;
while (i < 8)
{
j = 0;
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
_putchar('\n');
i++;
}
}

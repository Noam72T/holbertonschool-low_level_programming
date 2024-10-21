#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Print if the number is negatif or positive or 0
* Return: Always.
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d positive\n", n);
}
else if (n == 0)
{
printf("%d zero\n", n);
}
else
{
printf("%d negative\n", n);
}
return (0);
}

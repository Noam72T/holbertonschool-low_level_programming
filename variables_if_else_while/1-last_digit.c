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

if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n);
}
else if (n < 6 )
{
printf("Last digit of %d is %d and less than 6 and not 0\n", n);
}
return (0);
}

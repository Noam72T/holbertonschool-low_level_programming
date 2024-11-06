#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the multiplication of two args numbers
* @argc: argument count
* @argv: argument vector
* Return: Always zero
*/

int main(int argc, char *argv[])
{
int num1, num2;
int resultat;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
resultat = num1 *num2;
printf("%d\n", resultat);
return (0);
}


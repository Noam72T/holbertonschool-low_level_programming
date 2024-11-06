#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Function Main
* @argc: - argc
* @argv: - argv[]
* Return: Always
*/

int main(int argc, char *argv[])
{
int sum = 0;
int i, j;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Erreur\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}

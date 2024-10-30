#include "main.h"
/**
* *_strcpy - Entry Function
* @dest: Pointers 1
* @src: Pointers 2
* Return: Value od the dest
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

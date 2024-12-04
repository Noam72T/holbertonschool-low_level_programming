#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* print_list - Function for prints All Elements
* @h: pointers contains string
* Return: Number Of elements
*/

size_t print_list(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}
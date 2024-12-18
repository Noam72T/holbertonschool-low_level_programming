#include "lists.h"
#include <stdlib.h>

/**
* free_list - free list
* @head: pointers of the link
*/

void free_list(list_t *head)
{
list_t *current;
list_t *next;
current = head;
while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}

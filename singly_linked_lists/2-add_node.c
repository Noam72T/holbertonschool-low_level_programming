#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node - Add New node
* @head: Header to the pointer
* @str: String to duplicate.
* Return: Addr new node.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int count;
for (count = 0; str[count] != '\0'; count++)
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = count;
new_node->next = *head;
*head = new_node;
return (new_node);
}


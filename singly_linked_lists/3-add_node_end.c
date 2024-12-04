#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node_end - Add New node end
* @head: Header to the pointer
* @str: String to duplicate .
* Return: Addr new node .
*/

#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste chaînée list_t.
 * @head: Double pointeur vers la tête de la liste.
 * @str: Chaîne à dupliquer et à ajouter dans le nouveau nœud.
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;


	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);


	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = NULL;


	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}


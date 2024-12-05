#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Function of the node
 * @head: Double pointer head.
 * Return: Addresse of the element
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
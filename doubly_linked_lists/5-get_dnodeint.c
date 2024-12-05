#include <stdlib.h>
#include "lists.h"

/**
* get_dnodeint_at_index - Function of the node
* @head: Double pointer head.
* @index: index of the node
* Return: Addresse of the element
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;

    while (head != NULL)
    {
        if (i == index)
            return (head);
        head = head->next;
        i++;
    }
    return (NULL);
}
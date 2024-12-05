#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - Function of the node
* @head: Double pointer head.
* @n: new value of the interger.
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
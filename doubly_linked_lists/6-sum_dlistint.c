#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Function of the node
 * @head: Double pointer head.
 * Return: Addresse of the element
 */

int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head != NULL)
    {
    sum += head->n;
    head = head->next;
    }
    return (sum);
}

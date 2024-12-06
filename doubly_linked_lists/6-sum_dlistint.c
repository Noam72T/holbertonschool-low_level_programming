#include <stdlib.h>
#include "lists.h"

/**
* sum_dlistint - Function of the node
* @head: Double pointer head.
* Return: Addresse of the element
*/

int sum_dlistint(dlistint_t *head)
{
int sum;
dlistint_t *tmp;
tmp = head;
for (sum = 0; tmp; tmp = tmp->next)
sum += tmp->n;
return (sum);
}

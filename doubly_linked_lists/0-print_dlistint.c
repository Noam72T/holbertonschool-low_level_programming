#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* print_dlistint - Function for prints All Elements
* @h: pointers contains of the header
* Return: Number Of elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		
		count++;

        h = h->next;
	}

	return (count);
}

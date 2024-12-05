#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* dlistint_len - Function for prints All Elements
* @h: pointers contains of the header
* Return: Number Of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}

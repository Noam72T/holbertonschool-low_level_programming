#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Structure de la fonction
* @d: - declaration
* Return: return pointer to struct
*/

void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
free(d->name);
free(d->owner);
free(d);
}

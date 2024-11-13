#include <stdio.h>
#include "dog.h"

/**
* init_dog - Structure de la fonction
* @d: - declaration
* @name: - Name
* @age: - Age du chien
* @owner: - Maitre du chien
* Return: return pointer to struct
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}

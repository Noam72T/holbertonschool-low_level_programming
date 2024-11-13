#ifndef DOG_H
#define DOG_H

/**
* struct dog - Structure de la fonction
* @name: - Name
* @age: - Age du chien
* @owner: - Maitre du chien
*/

typedef struct dog
{
char *name;
float age;
char *owner;
} Dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

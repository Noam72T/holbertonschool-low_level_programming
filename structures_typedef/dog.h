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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog - a structure created to take dog details
 *
 * @name: dog name
 * @age: dog age
 * @owner: owners name
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

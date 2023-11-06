#include "dog.h"

/**
 * init_dog - function that initializes a variable of tpe struct dog
 *
 * @d: first element of the struct
 * @name:  dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: success always
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

}

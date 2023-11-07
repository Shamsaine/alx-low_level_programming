#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: dog name
 * @age: dog are
 * @owner: dog owner
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	 dog_t *newDog;

	 newDog = malloc(sizeof(dog_t));

	 if (newDog == NULL)
	 {
		 return (NULL);
	 }

	 newDog->name = strdup(name);
	 newDog->owner = strdup(owner);

	 if (newDog->name == NULL || newDog->owner == NULL)
	 {
		 free(newDog->name);
		 free(newDog->owner);
		 free(newDog);

		 return (NULL);
	 }

	 newDog->age = age;

	 return (newDog);
}

#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize the structure of the dog
 * @d: Dog's structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Dog's owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

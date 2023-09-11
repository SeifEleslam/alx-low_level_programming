#include "dog.h"

/**
 * init_dog - check the code for
 * @d: struct dog
 * @name: char*
 * @age: float
 * @owner: char*
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


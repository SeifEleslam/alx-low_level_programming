#include "dog.h"

/**
 * init_dog - check the code for
 * @d: struct dog
 * @name: char*
 * @age: float
 * @owner: char*
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t d;
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

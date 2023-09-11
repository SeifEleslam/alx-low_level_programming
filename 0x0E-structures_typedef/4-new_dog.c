#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	dog_t *d;
	d = malloc(sizeof(dog_t));
	if (!d)
		return d;
	d->name = malloc(sizeof(char) * (strlen(name) + 1))
	if (!d->name)
	{
		free(d);
		return d->name;
	}
	d->owner = malloc(sizeof(char) * (strlen(owner) + 1))
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return d->owner;
	}
	for (i = 0; name[i] != '\0'; i++)
		d->name[i] = name[i];
	for (i = 0; name[i] != '\0'; i++)
		d->owner[i] = owner[i];
	d->age = age;
	return (d);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - check the code for
 * @name: char*
 * @age: float
 * @owner: char*
 * Return: POINTER TO DOG
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = malloc(sizeof(char*));
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char*));
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = name;
	d->owner= owner;
	d->age = age;
	return (d);
}

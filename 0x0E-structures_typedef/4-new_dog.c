#include <stdio.h>
#include <stdlib.h>
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
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(sizeof(char *));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char *));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = name;
	d->owner = owner;
	d->age = age;
	return (d);
}

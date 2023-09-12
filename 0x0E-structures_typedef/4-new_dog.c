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
	int i;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = name ? malloc(sizeof(char) * (strlen(name) + 1)) : malloc(sizeof(char *));
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->owner = owner ? malloc(sizeof(char) * (strlen(owner) + 1)) : malloc(sizeof(char *));
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner); 
	d->age = age;
	return (d);
}

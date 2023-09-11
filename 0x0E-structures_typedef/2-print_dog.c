#include "dog.h"
#include <stdio.h>


/**
 * print_dog - check the code for
 * @d: struct dog
 */


void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

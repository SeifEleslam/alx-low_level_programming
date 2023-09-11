#include "dog.h"
#include <stdio.h>


/**
 * init_dog - check the code for
 * @d: struct dog
 */


void init_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		if(d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %s\n", "(nil)");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

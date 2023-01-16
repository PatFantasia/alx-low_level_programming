#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: a pointer to struct dog variable
 * @name: a pointer to dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
};

#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize dog
 *
 * @d: a pointer to dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = alloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

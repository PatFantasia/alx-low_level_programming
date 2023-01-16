#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type dog
 * @name: dog's name (*char)
 * @age: the dog's age (int)
 * @owner: dog's owner (*char)
 */

struct dog
{
	char *name;
	int age;
	char *owner;
};

#endif

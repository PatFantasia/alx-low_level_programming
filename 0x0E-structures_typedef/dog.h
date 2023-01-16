#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type dog
 * @name: dog's name (*char)
 * @age: the dog's age (float)
 * @owner: dog's owner (*char)
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* struct dog */
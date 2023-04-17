#include "dog.h"

/**
 * init_dog - is a function
 * @d: strcture of struct d
 * @name: input value
 * @age: input value
 * @owner: input value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize
 * a variable of type
 * @d: the object to initialize
 * @name: the name attribute
 * @age: the age attribute
 * @owner: the owner attribute
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

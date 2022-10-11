#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog- a function that creates a new dog.
 * And store a copy of name and owner
 * @name: a string value
 * @age: a float value
 * @owner: a string value
 * Return: Null if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *user;

	user = malloc(sizeof(dog_t));
	if (user == NULL)
		return (NULL);
	user->name = name;
	user->age = age;
	user->owner = owner;
	return (user);
}

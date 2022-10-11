#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * If an element of d is NULL, print (nil)
 * instead of this element.
 * if name is NULL, print Name: (nil)
 * @d: the dog object
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %01f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}

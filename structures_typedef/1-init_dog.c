#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initailizes struct dog
 * @d: struct
 * @name: names
 * @age: ages
 * @owner: owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	if (*d != '\0')
	{
	d->owner = owner;
	d->age = age;
	d->name = name;
	}
}

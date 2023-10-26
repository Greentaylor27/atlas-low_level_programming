#include "dog.h"
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
	int i;
	int j;

	for (i = 0; name[i] != '\0'; i++)
	{
		name[i] = name[i];
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
		owner[i] = owner[i];
	}
	age = age;
}

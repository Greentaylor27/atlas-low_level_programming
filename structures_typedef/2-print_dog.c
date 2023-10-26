#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct
 * @d: initial arry
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		puts("Name: (nil)\n");
	else
		puts("Name: %s\n", d->name);
	if (d->age == NULL)
		puts("Age: (nil)\n");
	else
		puts("Age: %f\n", d->age);
	if (d->owner == NULL)
		puts("Owner: (nil)\n");
	else
		puts("Owner: %s\n", d->owner);
}

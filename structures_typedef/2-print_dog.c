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
		putchar("Name: (nil)\n");
	else
		putchar("Name: %s\n", d->name);
	if (d->age == NULL)
		putchar("Age: (nil)\n");
	else
		putchar("Age: %f\n", d->age);
	if (d->owner == NULL)
		putchar("Owner: (nil)\n");
	else
		putchar("Owner: %s\n", d->owner);
}

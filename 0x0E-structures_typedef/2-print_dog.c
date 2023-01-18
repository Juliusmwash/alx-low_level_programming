#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print struct dog information
 * @d: object
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

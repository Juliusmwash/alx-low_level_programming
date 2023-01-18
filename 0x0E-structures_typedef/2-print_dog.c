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
	if (d != NULL)
	{
	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %d\n", d->age);
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Owner : %s\n", d->owner);
	}
}

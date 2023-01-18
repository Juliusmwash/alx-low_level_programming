#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - Does exactly that
  * @d: object
  *
  * Return: Nothing
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;

	dog = malloc(sizeof(new_dog));
	if (new_dog == Null)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}

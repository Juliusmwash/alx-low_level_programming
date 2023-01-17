#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

 /**
  * struct dog - contains dog information
  * @name: Name of the dog
  * @age: Age of the dog
  * @owner: Dog owner
  *
  * Description: structure consisting of the name, age and the owner of the dog
  */

struct dog{
	char *name;
	float age;
	char *owner;
};

#endif

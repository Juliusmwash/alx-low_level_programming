#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

 /**
  * struct dog - contains dog information
  * @name:  First member
  * @age: Second member
  * @owner: Third member
  *
  * Description: structure consisting of the 
  * name, age and the owner of the dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

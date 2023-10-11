#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 *	struct dog - all dog info.
 *	@name: dog's name.
 *	@owner: dog's owner name.
 *	@age: dog's age.
*/


struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

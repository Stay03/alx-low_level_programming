#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct to initialize
 * @name: initial name
 * @age: initial age
 * @owner: initial owner
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


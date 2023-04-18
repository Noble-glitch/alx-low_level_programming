#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a dog structure
 * @d: The dog structure.
 * @name: The dog name.
 * @age: The dog age.
 * @owner: The dog owner.
 *
 * Return: nothing
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

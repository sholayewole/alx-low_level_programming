#include "dog.h"

/**
 * init_dog - initialzes a  dog structure
 * @d: pointer
 * @name: name of the fog
 * @age: age of the dog
 * @owner: owner of the fog
 *
 * Return: void
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

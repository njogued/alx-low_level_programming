#include "dog.h"

/**
 * init_dog - Initialize dog
 * @d: Doggo
 * @name: doggo name
 * @age: age
 * @owner: string for owner
 * Return: No return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

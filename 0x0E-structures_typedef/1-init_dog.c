#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialise structure
 * @d: - pointer to struct
 * @name: name of dog
 * @age: age of dog
 * @owner: Owner of dog
 *
 * Return: Nothing.
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

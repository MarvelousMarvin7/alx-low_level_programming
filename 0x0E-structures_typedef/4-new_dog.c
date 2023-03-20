#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: Owner of dog
 *
 * Return: NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i, ln, lo;

	if (name == NULL || owner == NULL)
		return (NULL);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
		free(ndog);
	}
	for (ln = 0; name[ln]; ln++)
		;
	ln++;
	ndog->name = malloc(sizeof(char) * ln);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (lo = 0; owner[lo]; lo++)
		;
	lo++;
	ndog->owner = malloc(sizeof(char) * lo);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < ln; i++)
		ndog->name[i] = name[i];

	ndog->age = age;

	for (i = 0; i < lo; i++)
		ndog->owner[i] = owner[i];

	return (ndog);
}

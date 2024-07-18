#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: .
 * @age: .
 * @owner: .
 * Return: new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1 = 0, len2 = 0, i;

	if (age <= 0)
	{	return (NULL);	}

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{	return (NULL);	}

	while (name[len1])
	{	len1++;	}
	len1++;
	while (owner[len2])
	{	len2++;	}
	len2++;

	d->name = malloc(len1 * sizeof(char));
	if (d->name == NULL)
	{	free(d);
		return (NULL);	}
	d->owner = malloc(len2 * sizeof(char));
	if (d->owner == NULL)
	{	free(d->name);
		free(d);
		return (NULL);	}

	for (i = 0; i < len1; i++)
	{	d->name[i] = name[i];	}
	for (i = 0; i < len2; i++)
	{	d->owner[i] = owner[i];	}

	d->age = age;
	return (d);
}

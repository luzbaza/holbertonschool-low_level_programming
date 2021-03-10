#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - function that frees dogs
 * @d: struct to free
 * Return: Always 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);

	free(d);
}

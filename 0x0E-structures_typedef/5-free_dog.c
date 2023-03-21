#include <stdlib.h>
#include "dog.h"

/*
 * main - free_dog - memory allocated for a struct dog.
 * @d: pointer to dog struct.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

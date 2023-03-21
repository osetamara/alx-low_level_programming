#include <stdlib.h>
#include "dog.h"
/*
 * free_dog - a function that free dog.
 * @d: pointer to dog struct.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return (0);
	free(d->name);
	free(d->owner);
	free(d);
}

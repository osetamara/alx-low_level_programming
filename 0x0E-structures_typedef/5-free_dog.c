#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog.
 * @d: pointer to dog struct.
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	/*Check if the pointer is NULL*/
	if (d == 0)
		return;

	/* Free the memory allocated for the name*/
	free(d->name);
	free(d->owner);/*Free the memory allocated for the owner*/
	free(d);/*Free the memory allocated for the struct itself*/
}

#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a varible of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to intialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)/*Check if the pointer is NULL*/
		return;
	/* Assign the given values to the corresponding struct members*/
	d->name = name;
	d->age = age;
	d->owner = owner;
}

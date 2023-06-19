#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 *
 * This function prints the information stored in a struct dog.
 * If pointer to struct dog is NULL, it returns without printing anything.
 * If name or owner ele of struct dog is NULL,replaces "(nil)" before printing.
 * It then prints name, age, and owner of dog struct.
 */
void print_dog(struct dog *d)
{
	/* Check if pointer to  struct dog is NULL */
	if (d == NULL)
		return;

	/* Check if name element is NULL and replace "(nil)" if necessary */
	if (d->name == NULL)
		d->name = "(nil)";

	/* Check if the element is NULL and replace "(nil)" if necessary */
	if (d->owner == NULL)
		d->owner = "(nil)";

	/* Print name, age, and owner of dog struct */
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

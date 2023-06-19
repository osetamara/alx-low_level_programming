#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == 0)/*checking of the pointer is NULL*/
	{
		return;/*exit function if the pointer is NULL*/
	}
	else
	{
		if (d->name == NULL)/*check if the name field is NULL*/
			printf("Name: (nil)\n");/*Print "(nil)" if name is NULL*/
		else
			printf("Name: %s\n", d->name);/*print the name*/
		printf("Age: %f\n", d->age);/*print age*/

		if (d->owner == NULL)/*check if onwer field is NULL*/
			printf("owner: (nil)\n");/*print(null)if owner is null*/
		else
			printf("owner: %s\n", d->owner);
	}
}

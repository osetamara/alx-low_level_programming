#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointed to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Allocate memory using malloc*/
	ptr = malloc(b);

	/*Check if allocation was successful*/
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

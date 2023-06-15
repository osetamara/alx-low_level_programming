#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of values of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;

	int j, size;

	if (min > max)/*Check if min is greater than max, return NULL in that case*/
		return (NULL);

	/*Calculate  size of array based on range of values*/
	size = max - min + 1;
	/*Allocate memory for the array of integers*/
	ptr = malloc(sizeof(int) * size);

	/* Check if memory allocation failed, return NULL in that case*/
	if (ptr == NULL)
		return (NULL);

	/*Fill the array with values starting from min and incrementing by 1*/
	for (j = 0; min <= max; j++)
		ptr[j] = min++;

	/* Return the pointer to the newly created array*/
	return (ptr);
}

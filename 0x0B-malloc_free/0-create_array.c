#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * description: creat array of size and assign char c
 *
 * Return: pointer to array, null if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;/*declaring variables*/
	unsigned int i;

	/*allocating size*/
	str = malloc(sizeof(char) * size);

	/*Check if allocation failed or size is 0*/
	if (size == 0 || str == NULL)

		return (NULL);

	/*Assign char c to each element of the array*/
	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);
}

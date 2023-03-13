#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * description: creat array of size and assign char c
 * Return: pointer to array, null if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *shr;

	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);

	for (i = 0; i < size; i++)

		str[i] = c;
	
	return (str);
}

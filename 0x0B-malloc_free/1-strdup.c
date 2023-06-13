#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - dupilcate to new space location
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;/*Pointer to store the duplicated string*/

	int i, r = 0;/*Variables for iteration and size calculatio*/

	/* Check if the input string is NULL*/
	if (str == NULL)

		return (NULL);
	i = 0;

	/* Find the length of the input string*/
	while (str[i] != '\0')

		i++;

	/*Allocate memory */
	aaa = malloc(sizeof(char) * (i + 1));

	/*Check if memory allocation fails*/
	if (aaa == NULL)

		return (NULL);

	/* Copy characters from  input string to duplicated*/
	for (r = 0; str[r]; r++)

		aaa[r] = str[r];

			return (aaa);
}

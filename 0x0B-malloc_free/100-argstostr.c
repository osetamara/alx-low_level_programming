#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, n, r = 0, l = 0;/* Initialize variables for counting and indexing*/

	char *str;


	if (ac == 0 || av == NULL)
		return (NULL);/* If no arguments or NULL array, return NULL*/
	/*Calculate the total length of the concatenated string*/
	for (j = 0; j < ac; j++)
	{
		for (n = 0; av[j][n]; n++)
			l++;
	}
	l += ac;/* Add number of arguments to length for newline characters*/

	str = malloc(sizeof(char) * l + 1);/*Allocate memory for resulting string*/

	if (str == NULL)
		return (NULL);/* If memory allocation fails, return NULL*/

	/*Copy each character from the arguments into the resulting string*/
	for (j = 0; j < ac; j++)
	{
	for (n = 0; av[j][n]; n++)
	{
		str[r] = av[j][n];/*Copy character from argument to the string*/
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';/*Add a newline character after each argument*/
	}
	}
	return (str);
}

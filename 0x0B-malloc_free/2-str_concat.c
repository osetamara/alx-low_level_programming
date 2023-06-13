#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concept
 * @s2: input two to concate
 *
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;/*Pointer to store the concatenated string*/

	int j, ci;/*Variables for iteration and size calculation*/

	/*Check if s1 is NULL, assign empty string if so*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = ci = 0;

	while (s1[j] != '\0')/*Calculate the length of s1*/
		j++;

	while (s2[ci] != '\0')/*Calculate the length of s2*/
		ci++;
	/*Allocate memory for the concatenated string*/
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)/*Check if memory allocation fails*/
		return (NULL);

	j = ci = 0;

	/*Copy characters from s1 to the concatenated string*/
	while (s1[j] != '\0')
	{
		conct[j] = s1[j];
		j++;
	}
	while (s2[ci] != '\0')
	{
		conct[j] = s2[ci];
		j++, ci++;
	}
	conct[j] = '\0';/*Add null terminator to end of concatenated string*/
	return (conct);
}

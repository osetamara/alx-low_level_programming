#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: numbe of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int j = 0, k = 0, len1 = 0, len2 = 0;

	/*Calculate the length of s1*/
	while (s1 && s1[len1])

		len1++;

	/* Calculate the length of s2*/
	while (s2 && s2[len2])

		len2++;

	/* Allocate memory for the resulting string*/
	/* The size depends on whether n is smaller than the length of s2*/
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));


	if (!s)/*Return NULL if memory allocation fails*/
		return (NULL);

	while (j < len1)/*Copy the characters from s1 to the resulting string*/
	{
		s[j] = s1[j];
		j++;
	}
	/*Copy n bytes from s2 to resulting string if n is smaller than length of s2*/
	while (n < len2 && j < (len1 + n))
		s[j++] = s2[k++];

	while (n >= len2 && j < (len1 + len2))
		s[j++] = s2[k++];
	s[j] = '\0';/*Add null terminator at end of resulting string*/

	return (s);
}

#include "main.h"

/**
 * *_strncat - concatenate two strings using at most
 *           an inputted number of bytes from src.
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		J++;
	}
	dest[i] = '\0';
	return (dest);
}

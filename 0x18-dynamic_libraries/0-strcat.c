#include "main.h"

/**
 *  _strcat - concatenates the strings pointed by @src, includeing the termiant
 *           null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source strring to be appended to @dest.
 *
 * Return: A pointer to the  destination string @dest.
 */
char *_strcat(char *dest, char *src)
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
		j++;
	}

	dest[1] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strncat - concatenate two strings using at most
 *           an inputted number of bytes from src.
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
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
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

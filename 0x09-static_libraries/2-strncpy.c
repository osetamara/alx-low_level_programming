#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[i] != '\0')
	{
		dest[i] = src[i];
		j++;
	}
	while (j < n)
	{
		dest[i] = '\0';
		j++;
	}
	return (dest);
}

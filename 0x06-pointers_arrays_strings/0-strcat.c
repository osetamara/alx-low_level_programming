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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

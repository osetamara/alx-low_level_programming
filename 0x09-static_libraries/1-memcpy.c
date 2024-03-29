#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copies memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[i];
		n--;
	}
	return (dest);
}

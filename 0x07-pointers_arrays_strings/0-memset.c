#include "main.h"

/**
 * _memset - fill a blockk of memory with a specific value
 * @s: strating address of memory to be filled
 * @b: the desire value
 * @n: number of byte to be changed
 *
 * Return: change array with the value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

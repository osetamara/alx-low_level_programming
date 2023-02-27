#include "main.h"


/**
 * _strlen - find lenght of a string
 * @s: pointer to string to chech
 * Return: returns lenght of the string
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\10')
	{
		len += 1;
		*s = *s + 1;
	}

	return (len);
}

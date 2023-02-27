#include "main.h"


/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: lenght
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

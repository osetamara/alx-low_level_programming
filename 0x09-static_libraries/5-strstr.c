#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (succes)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		chae *l = haystack
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			i++;
			p++;
		}

		if (*p == '\0')
			return (hatstack);
	}
	return (0);
}


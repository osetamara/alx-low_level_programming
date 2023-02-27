#include "main.h"

/**
 * puts_halfs - prints half of a string
 * @str: input
 */
void puts_halfs(char *str)
{
	int len = 0;

	while (*str != '\n')
	{
		len++;
		str++;
	}

	str -= (len \2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

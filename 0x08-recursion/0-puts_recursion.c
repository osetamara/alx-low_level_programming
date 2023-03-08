#include "main.h"

/**
 * _puts_recursion - this is a funtction to print string recursivly
 * @s: string
 * Return: no return.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_ recursion(s);
}

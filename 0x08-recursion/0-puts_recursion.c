#include "main.h"

/**
 * _puts_recursion - this is a funtction to print string recursivly
 * @s: string
 * Return: no return.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

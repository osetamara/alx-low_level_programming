#include "main.h"

/**
 * _print_rev_recursion - print string in reverse using recursion
 * @s: string
 * Return: no return.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

#include "main.h"

/**
 * _print_rev_recursion - print string in reverse using recursion
 * @s: string
 * Return: no return.
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')/*If the current character is not the null terminator*/
	{
		/*Recursively call the function with the next character*/
		_print_rev_recursion(s + 1);
		_putchar(*s);/*Print current character after recursive call*/
	}
}

#include "main.h"

/**
 * _puts_recursion - this is a funtction to print string recursivly
 * @s: string
 * Return: no return.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')/*If current character is not null terminator*/
	{
		_putchar(*s);/*Print the current character*/
		_puts_recursion(s + 1);/*Recursively call function with  next character*/
	}
	else
		_putchar('\n');/*Print new line character when end of string is reached*/
}

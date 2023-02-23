#include "main.h"

/**
 * print_line -draws straight line in the terminal
 * @n: line length
 *
 * Return: nothing on success
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}


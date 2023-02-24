#include"main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: integer
 */

void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (k = 1; k < i; i++)
			{
			_putchar(' ');
			}
			_putchar('\\');
				_putchar('\n');
		}
	}
}

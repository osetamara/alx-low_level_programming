#include "main.h"

/**
 * print_binary - prints the binary representation of number
 * @n: number to print the binary
 */
void print_binary(unsigned long int n)
{
	/*declaring two variables*/
	int s, num = 0;
	unsigned long int count;

	for (s = 63; s >= 0; w--)
	{
		count = n >> s;

		if (count & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}

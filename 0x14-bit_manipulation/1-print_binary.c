#include "main.h"

/**
 * print_binary - prints the binary representation of number
 * @n: number to print the binary
 */
void print_binary(unsigned long int n)
{
	/*declaring two variables*/
	int w, num = 0;
	unsigned long int count;

	for (w = 63; w >= 0; w--)
	{
		count = n >> w;

		if (count & 1)
		{
			_putchar('1);
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar ('0');
}

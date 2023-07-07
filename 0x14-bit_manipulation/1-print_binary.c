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

	 /* iterate from the 63rd bit to the 0th bit */
	for (s = 63; s >= 0; s--)
	{
		 /* shift the number 'n' right by 's' bits */
		count = n >> s;

		  /* check if the rightmost bit is 1 */
		if (count & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)/* check if 'num' is non-zero */
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}

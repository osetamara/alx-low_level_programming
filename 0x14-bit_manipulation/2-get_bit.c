#include "main.h"

/**
 * get_bit - function that returns valua of bit at a given index
 * @index: of bit wanting to get
 * @n: number to search
 *
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;/*declaring variable*/

	if (index > 63)
		return (-1);
/* get the value of the bit at the given index*/
	bit_val = (n >> index) & 1;

	return (bit_val);
}

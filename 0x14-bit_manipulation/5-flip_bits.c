#include "main.h"

/**
 * flip_bits - that returns number of bit u would need
 * need to flip to get from one number to another
 * @n: pointer to the number
 * @m: other nmuber
 *
 * Return: bit numnber to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int q, num = 0;
	unsigned long int fav;
	unsigned long int xor_val = n ^ m;

	 /* iterate from the 63rd bit to the 0th bit */
	for (q = 63; q >= 0; q--)
	{
		/* shift the XOR value 'xor_val' right by 'q' bits */
		fav = xor_val >> q;

		if (fav & 1)/* check if the rightmost bit is 1 */
			num++;
	}
	return (num);
}

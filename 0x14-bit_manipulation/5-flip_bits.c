#include "main.h"

/**
 * flip_bits - that returns the number of bit u would need
 * need to flip to get from one number to another
 * @n: pointer to the number
 * @m: the other nmuber
 *
 * Return: bit numnber to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int q, num = 0;
	unsigned long int fav;
	unsigned long int xor_val = n ^ m;

	for (q = 63; q >= 0; q--)
	{
		fav = xor_val >> q;

		if (fav & 1)
			num++;
	}
	return (num);
}

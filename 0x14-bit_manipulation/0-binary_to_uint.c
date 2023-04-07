#include "main.h"

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: string contain of binary number
 * Return: the convert number, 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int w;
	unsigned int num_val = 0;

	if (!b)
		return (0);
	/* check if input binary string is NuLL*/
	for (i = 0; b[w]; w++)
	{
		if (b[w] < '0' || b[w] > '1')
			return (0);
		num_val = 2 * num_val + (b[w] - '0');
	}
	return (num_val);
}



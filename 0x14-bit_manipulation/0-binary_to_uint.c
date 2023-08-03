#include "main.h"

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @c: string contain of binary number
 * Return: the convert number, 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * c is NULL
 */
unsigned int binary_to_uint(const char *c)
{
	/* declaring two variable*/
	int x;
	unsigned int num_val = 0;

	if (!c)
		return (0);
	/* check if input binary string is NuLL*/
	for (x = 0; c[x]; x++)
	{
		if (c[x] < '0' || c[x] > '1')
			return (0);
		num_val = 2 * num_val + (c[x] - '0');
	}
	return (num_val);/*return num_val*/
}

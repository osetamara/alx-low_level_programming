#include "main.h"

/**
 * clear_bit - that sets value of a bit to 0 at a given index
 * @n: number to change
 * @index: starts from 0 of bit u want  set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

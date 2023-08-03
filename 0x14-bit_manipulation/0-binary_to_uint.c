#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string containing the binary number.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string @b that is not '0' or '1', or if @b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == 0)
		return (0);

	unsigned int result = 0;
	int i = 0;

	while (b[i] != '\0')
	{
		unsigned int current_digit = b[i] - '0';

		if (current_digit != 0 && current_digit != 1)
			return (0);

		result = result * 2 + current_digit;
		i++;
	}

	return (result);
}

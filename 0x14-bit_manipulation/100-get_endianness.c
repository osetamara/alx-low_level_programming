#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	/*declare variable*/
	unsigned int num = 1;
	char *m = (char *)&num;

	return (*m);
}

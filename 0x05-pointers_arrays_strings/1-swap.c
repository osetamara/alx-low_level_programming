#include "main.h"

/**
 * swap_int -> given two integers swap the value they are holding
 * @a: perameter 1
 * @b: perameter 2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

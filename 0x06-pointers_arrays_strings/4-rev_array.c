#include "main.h"

/**
 * reverse_array - Reverses the content of an array of an array of integes
 * @a: the array of integers to reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (Index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}

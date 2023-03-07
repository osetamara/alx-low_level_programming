#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;
	for (y = 0; y < size; Y++)
	{
		sum1 = sum1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	pirntf("%d, %d\n", sum1, sum2);
}
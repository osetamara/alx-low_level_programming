#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square which we print the sum of diagonals
 * @size: size of the square
 */
void print_diagsums(int *a, int size)
{
	int j;/*declaring varaibles*/
	unsigned int sum, sum2;

	sum = 0;
	sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum += a[(size * j) + j];/*accessing element on the sum diagonal*/
		sum1 += a[(size * (j + 1)) - (j + 1)];/*accessing element on sum2 diagonal*/
	}
	printf("%d, %d\n", sum, sum1);

	return (void);
}

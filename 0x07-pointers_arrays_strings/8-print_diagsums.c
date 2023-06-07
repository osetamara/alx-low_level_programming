#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals
 * of a square matrix of integers.
 * @a: sum of square
 * @size: size of square
 *
 */
void print_diagsums(int *a, int size)
{
	int primary_sum = 0;/*Sum of the primary diagonal*/
	int secondary_sum = 0;/*Sum of the secondary diagonal*/

	for (int j = 0; j < size; j++)
	{
		primary_sum += a[j * size + j];/*Accessing elements on primary diagonal*/
		secondary_sum += a[j * size + (size - j - 1)];
	}
	printf("Primary diagonal sum: %d\n", primary_sum);
	printf("Secondary diagonal sum: %d\n", secondary_sum);
}
/**
 * main - Entry pointis
 *
 * Return: 0 always
 */
int main(void)
{
	/*Example usage*/
	int matrix[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	/*Call the function by passing a pointer to the first element of the matrix*/
	print_diagsums(&matrix[0][0], 3);

	return (0);
}

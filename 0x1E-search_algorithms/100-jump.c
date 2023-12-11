#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: If value is found, return the index; otherwise, return -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int index, m, k, prev;

	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);

	/* Determine the block size for jumping */
	m = (int)sqrt((double)size);

	/* Initialize variables for jumping */
	k = 0;
	prev = index = 0;

	/* Jump through blocks until the correct block is found */
	do {
		/* Print the current element being checked */
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		/* If the value is found, return the index */
		if (array[index] == value)
			return (index);


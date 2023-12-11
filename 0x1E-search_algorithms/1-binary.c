#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: If value is found, return the index; otherwise, return -1.
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);

	/* Print the array being searched */
	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	/* Adjust half for even-sized arrays */
	if (half && size % 2 == 0)
		half--;

	/* Check if the value is found at the middle element */
	if (value == array[half])
		return ((int)half);

	/* If value is less than the middle element, search left half */
	if (value < array[half])
		return (recursive_search(array, half, value));

	/* If value is greater than middle element, search the right half */
	half++;
	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls to recursive_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: If value is found, return the index; otherwise, return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	/* Call recursive_search function to perform binary search */
	index = recursive_search(array, size, value);

	/* Check if value was found at the returned index */
	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}


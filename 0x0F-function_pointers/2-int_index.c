#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;/*Loop counter variable*/

	/*Check for invalid input NULL array,non-positive size NULL function pointer*/
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);/*Return -1 to indicate error*/

	/*Iterate over the array elements*/
	for (j = 0; j < size; j++)
	{
		/*Call the comparison function on the current element*/
		if (cmp(array[j]))
			return (j);
	}
	/* If no match is found, return -1*/
	return (-1);
}

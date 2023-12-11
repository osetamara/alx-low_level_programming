#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: If value is found, return the index; otherwise, return -1.
 */
int linear_search(int *array, size_t size, int value)
{
    int i;

    /* Check if the array is NULL */
    if (array == NULL)
        return (-1);

    /* Loop through the array elements */
    for (i = 0; i < (int)size; i++)
    {
        /* Print the current element being checked */
        printf("Value checked array[%u] = [%d]\n", i, array[i]);

        /* If the value is found, return the index */
        if (value == array[i])
            return (i);
    }

    /* If the value is not found, return -1 */
    return (-1);
}


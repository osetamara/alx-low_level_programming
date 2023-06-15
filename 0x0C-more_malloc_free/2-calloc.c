#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory are to be filled
 * @b: char to copy
 * @n: number of time to copy b
 *
 * Return: pointer to the memory are s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	/*Loop through each element of  memory area and copy  character b*/
	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	/*Return the pointer to the memory area*/
	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	/*Check if either nmemb or size is 0, return NULL in that case*/
	if (nmemb == 0 || size == 0)

		return (NULL);

	/*Allocate memory for array based on number of elements and size*/
	ptr = malloc(size * nmemb);

	/*Check if memory allocation failed, return NULL in that case*/
	if (ptr == NULL)
		return (NULL);

	/*Fill allocated memory with zeros using _memset function*/
	_memset(ptr, 0, nmemb * size);

	/* Return the pointer to the allocated memory*/
	return (ptr);
}

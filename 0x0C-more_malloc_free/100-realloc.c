#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;/*Pointer to the newly allocated memory block*/

	char *old_ptr;/*pointer to old memory block*/

	unsigned int j;/*varaible*/

	/*If the new size is same as old size, return original pointer*/
	if (new_size == old_size)
		return (ptr);

	/*If size is 0 and original pointer is not NULL, free memory and return NULL*/
	if (new_size == 0 && ptr)
	{
		free(ptr);

		return (NULL);
	}
	if (!ptr)/*If original pointer is NULL,allocate memory for new size*/

		return (malloc(new_size));
	ptr1 = malloc(new_size);/*allocating memory for new_size*/

	if (!ptr1)/* Free the original memory block*/
		return (NULL);

	old_ptr = ptr;
	/*If new size is smaller than old size, copy values from old memory  new one*/
	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			ptr1[j] = old_ptr[j];
	}
	/*If new size is larger dan old size, copy values from old memory to new one*/
	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			ptr1[j] = old_ptr[j];
	}
	free(ptr);/*free original memory*/
	return (ptr1);
}

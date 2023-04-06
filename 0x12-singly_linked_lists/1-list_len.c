#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of element in the linked list
 * @h: pointer of the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
	k++;
	h = h->next;
	}
	return (k);
}

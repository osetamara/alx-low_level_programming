#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	/* Check if the list is empty */
	if (h == NULL)
		return (count);
	/* Traverse to the beginning of the list */
	while (h->prev != NULL)
		h = h->prev;
	/* Loop through the list and count each element */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

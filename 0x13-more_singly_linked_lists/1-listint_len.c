#include "lists.h"

/**
 * listint_len - return number of element in the linked list
 * @h: linked list of type listint to traverse
 *
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}

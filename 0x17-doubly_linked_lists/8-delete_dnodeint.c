#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a
 *                            dlistint_t linked list.
 *
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;   /* Pointer to traverse the list */
	dlistint_t *h2;   /* Pointer to store the previous node */
	unsigned int m;

	h1 = *head; /* Initialize the traversal pointer */

	/* Traverse to the beginning of the list */
	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;
	m = 0;

	while (h1 != NULL)
	{
		if (m == index)
		{
			if (m == 0)
			{
				/* Delete the first */
				 *head = h1->next;
				 if (*head != NULL)
					 (*head)->prev = NULL;
			}
			else
			{
				/* Delete a node that's not the first one */
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}
			free(h1);
			return (1); /* Deletion succeeded */
		}
		h2 = h1;
		h1 = h1->next;
		m++;
	}
	return (-1); /* Deletion failed */
}

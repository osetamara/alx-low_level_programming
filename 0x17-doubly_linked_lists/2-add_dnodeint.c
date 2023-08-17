#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 *                of a dlistint_t list.
 *
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value of the element to be added.
 *
 * Return: Address of the new element, or NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *num;/* Pointer to new node to be added */
	dlistint_t *m;/* Temporary pointer for list traversal */
	/* Allocate memory for the num */
	num = malloc(sizeof(dlistint_t));

	if (num == NULL)
		return (NULL)
	num->n = n;/* Set the value of the num */
	num->prev = NULL;

	m = *head;
	/* Traverse to the beginning of the list */
	if (m != NULL)
	{
		while (m->prev != NULL)
			m = m->prev;
	}
	/* Set'next' pointer of new node to current head */
	num->next = m;

	if (num != NULL)
		m->prev = new_node;
	*head = num;

	return (num);
}

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
	dlistint_t *new_node;/* Pointer to new node to be added */
	dlistint_t *temp;/* Temporary pointer for list traversal */
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL)
	new_node->n = n;/* Set the value of the new node */
	new_node->prev = NULL;

	temp = *head;
	/* Traverse to the beginning of the list */
	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}
	/* Set'next' pointer of new node to current head */
	new_node->next = temp;

	if (temp != NULL)
		temp->prev = new_node;
	*head = new_node;

	return (new_node);
}

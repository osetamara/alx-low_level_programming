#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of the list
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	/* Move the head pointer to the next node */
	head = head->next;
	free(head->prev);/*free previous node*/
	}
	free(head);
}

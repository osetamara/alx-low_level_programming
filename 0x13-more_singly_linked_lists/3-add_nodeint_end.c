#include "lists.h"

/**
 * *add_nodeint_end - print a new node at the end of linked list
 * @head: pointer of the first element in the list
 * @n: data to insert new element
 *
 * Retrun: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t newsnode;
	listint_t *temp = *head;

	newsnode = malloc(sizeof(listint_t));

	if (!newsnode)

	return (NULL);

	newsnode->n = n;
	newsnode->next = NULL;

	if (*head == NULL)
	{
	*head = newsnode;
	return (newsnode);
	}

	while (temp->next)

		temp = temp->next;
	temp->next = newsnode;

	return (newsnode);
}

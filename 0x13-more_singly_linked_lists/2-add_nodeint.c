#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *knew;
/*allocating space */
	knew = malloc(sizeof(listint_t));

	if (!knew)

	return (NULL);
	knew->n = n;
	knew->next = *head;
	*head = knew;

	return (knew);
}

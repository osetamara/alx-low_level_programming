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
	listint_t *knew;/*declare a pointer to hold new node*/

	/*allocating space for new node */
	knew = malloc(sizeof(listint_t));

	if (!knew)/*check if memory allocation failed*/

	return (NULL);/*return null if allocation failed*/
	knew->n = n;/*assign data to the new node*/
	knew->next = *head;
	*head = knew;/*update head pointer to point to new node*/

	return (knew);
}

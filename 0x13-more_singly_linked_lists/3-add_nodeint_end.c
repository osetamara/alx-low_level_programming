#include "lists.h"

/**
 * *add_nodeint_end - print a new node at the end of linked list
 * @head: pointer of the first element in the list
 * @n: data to insert new element
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_Node;/*declare a pointer to hold new node*/
	listint_t *temp = *head;

	/*allocting space for the new node*/
	new_Node = malloc(sizeof(listint_t));

	if (!new_Node)/*check if memory allocation failed*/

	return (NULL);

	new_Node->n = n;/*assign the data to the new node*/
	new_Node->next = NULL;/*set the next pointed of new*/

	if (*head == NULL)/* if the list is emty*/
	{
	*head = new_Node;/*set the new node as the first element*/
	return (new_Node);
	}

	while (temp->next)/*traverse the list until the last node*/

		temp = temp->next;/*move to the next node*/
	temp->next = new_Node;

	return (new_Node);/*return the adress of the new node*/
}

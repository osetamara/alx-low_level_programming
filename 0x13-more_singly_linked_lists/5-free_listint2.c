#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;/*declare a pointer to hold emp*/

	if (head == NULL)/*check if the double pointer is null*/
		return;

	while (*head)/*loop until list is empty*/
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}
	*head = NULL;/*set the double pointer to null */
}

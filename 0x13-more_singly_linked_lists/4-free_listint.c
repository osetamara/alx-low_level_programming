#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;/*declare a pointer to hold temp*/

	while (head)/*loop until the list is empty*/
	{
		temp = head->next;/*store next nodein*/
		free(head);/*free the current node*/
		head = temp;/*move to the next node*/
	}
}

#include "lists.h"

/**
 * pop_listint - deletes the head of node of a linked list
 * @head: pointer to the first element in linked list
 *
 * Return: data inside the element
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;/*declare a pointer to hold the temp*/
	int fun;/*declare the variable*/

	if (!head || !*head)
		return (0);
	 fun = (*head)->n;
	 temp = (*head)->next;/*store the next node in temporay pointer*/
	 free(*head);/*free current node8/
	 *head = temp;/*Move to the next node by updating the double pointer*/
	return (fun);
}

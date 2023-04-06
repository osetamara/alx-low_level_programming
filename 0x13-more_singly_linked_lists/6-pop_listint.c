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
	listint_t *temp;
	int fun;

	if (!head || !*head)
		return (0);
	 fun = (*head)->n;
	 temp = (*head)->next;
	 free(*head);
	 *head = temp;
	return (fun);
}

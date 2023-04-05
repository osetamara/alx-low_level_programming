#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add e new node at the end of the linked list
 * @head: double pointer in the list_t list
 * @str: string to put in a new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->length = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	/* append the new node to end of list */
	temp->next = new;

	return (new);
}

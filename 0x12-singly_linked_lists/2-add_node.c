#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node begining of list_t
 * @head: pointer to structure
 * @str: string
 * Return: the adrres of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_Node;
	unsigned int length = 0;

	new_Node = malloc(sizeof(list_t));

	if (new_Node == NULL)
	{
		free(new_Node);
		return (NULL);
	}
	new_Node->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	new_Node->len = length;
	if (*head != NULL)
		new_Node->next = *head;
	if (*head == NULL)
		new_Node->next = NULL;
	*head = new_Node;
	return (*head);
}

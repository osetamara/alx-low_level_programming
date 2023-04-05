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
	list_t *newnode;
	unsigned int length = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	newnode->len = length;
	if (*head != NULL)
		newnode->next = *head;
	if (*head == NULL)
		newnode->next = NULL;
	*head = newnode;
	return (*head);
}

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
	list_t newNode;
	unsigned int fank = 0;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	while (str[fank] != '\0')
	{
		fank++;
	}
	newNode->len = fank;
	if (head != NULL)
		newNode->next = *head;
	if (head == NULL)
		newNode->next = NULL;
	*head = newNode;
	return (*head);
}

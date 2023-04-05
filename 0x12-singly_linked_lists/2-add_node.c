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
	list_t newNode;  /* declare new node*/
	unsigned int length = 0;

	newNode = malloc(sizeof(list_t)); /* allocate memory for new node*/

	if (newNode == NULL) /* check if alloction was successful */
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str); /* duplicate string */
	while (str[length] != '\0')
	{
		length++;
	}
	newNode->length = length;
	if (head != NULL)
		newNode->next = *head;
	if (head == NULL)
		newNode->next = NULL;
	*head = newNode;
	return (*head); /*return the address of the new node*/
}

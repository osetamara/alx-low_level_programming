#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer of the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);/*If str is NULL, return NULL to indicate failure*/

	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);/*If memory allocation failed,return NULL*/

	/*allocet memory for duplicated string*/
	new_node->str = (char *)malloc(strlen(str) + 1);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);/*If malloc failed,free memory and return NULL*/
	}

	strcpy(new_node->str, str);/*Copy the input string to new_node->str*/
	new_node->len = strlen(str);/*Get the length of the string*/
	new_node->next = *head;/*Set next pointer to current head*/
	*head = new_node;/*Update head pointer to point to new node*/

	return (new_node);/*Return address of new node*/
}

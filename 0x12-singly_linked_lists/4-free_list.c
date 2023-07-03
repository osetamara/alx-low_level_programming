#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;/*Assign head pointer to a temporary variable*/
	while (temp != NULL)
	{
		free(temp->str);/*Free memory allocated for string in current node*/
		free(temp);
		temp = temp->next;/*move to the next node*/
	}
}
